/// @file testing/for_each_member_tools.h
#pragma once

#include <gtest/gtest.h>
#include <cstring>
#include <algorithm>

namespace System {

    inline bool is_vp_test(const ::testing::TestInfo* test_info)
    {
        const char* suite_name = test_info->test_suite_name();

        auto suite_name_len = std::strlen(suite_name);

        bool has_slash = std::any_of(suite_name, suite_name + suite_name_len, [](char ch){ return ch == '/';});

        const char suffix[] = "VP";
        bool is_ends_with_VP = (std::strncmp(suite_name + suite_name_len - 2, suffix, 2) == 0);

        return has_slash && is_ends_with_VP;
    }

    inline bool is_parametrized_test(const ::testing::TestInfo* test_info)
    {
        const char *name = test_info->name();
        auto name_len = std::strlen(name);
        return std::any_of(name, name + name_len, [](char ch) { return ch == '/'; });
    }

    inline std::string ForEachMemberGVName() {
        const ::testing::TestInfo* const test_info = ::testing::UnitTest::GetInstance()->current_test_info();

        if (is_vp_test(test_info))
        {
            // TestEquationsAndFormulas/Test13733VP
            std::string case_name = test_info->name(); 
            // Test/34
            std::string suite_name = test_info->test_suite_name();

            auto slash_it = std::find(suite_name.begin(), suite_name.end(), '/');
            std::string gv_name(suite_name.begin(), slash_it);
            // gv_name == "TestEquationsAndFormulas"
            gv_name += '_';
            // gv_name == "TestEquationsAndFormulas_"
            gv_name.append(slash_it + 1, suite_name.end() - 2);
            // gv_name == "TestEquationsAndFormulas_Test13733"
            gv_name += '_';
            // gv_name == "TestEquationsAndFormulas_Test13733_"

            slash_it = std::find(case_name.begin(), case_name.end(), '/');
            gv_name.append(slash_it + 1, case_name.end());
            // gv_name == "TestEquationsAndFormulas_Test13733_34"

            gv_name += ".gv";
            // gv_name == "TestEquationsAndFormulas_Test13733_34.gv"

            return gv_name;
        }

        if (is_parametrized_test(test_info))
        { //LatexToPdfConverterTests_PDFNET_55738.Test/1

            //LatexToPdfConverterTests_PDFNET_55738
            std::string gv_name{ test_info->test_suite_name() };
            //Test/1
            std::string case_name = test_info->name();

            auto slash_it = std::find(case_name.begin(), case_name.end(), '/');
            gv_name += '_';
            //LatexToPdfConverterTests_PDFNET_55738_
            gv_name.append(case_name.begin(), slash_it);
            //LatexToPdfConverterTests_PDFNET_55738_Test
            gv_name.append(slash_it + 1, case_name.end());
            //LatexToPdfConverterTests_PDFNET_55738_Test_1
            gv_name += ".gv";
            //LatexToPdfConverterTests_PDFNET_55738_Test_1.gv

            return gv_name;
        }

        return std::string(test_info->test_suite_name()) + "_" + std::string(test_info->name()) + ".gv";
    }

    
}
