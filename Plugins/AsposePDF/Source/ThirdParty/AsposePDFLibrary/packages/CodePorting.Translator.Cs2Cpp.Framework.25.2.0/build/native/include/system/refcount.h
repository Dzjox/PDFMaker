/// @file system/refcount.h
/// Contains the declaration of System::Refcount class.
#ifndef _refcount_h_
#define _refcount_h_

#include "defines.h"

#include <atomic>
#include <system/diagnostics/debug.h>

#include "system/details/makeobject_leakage_detector.h"

namespace System { namespace Detail {

/// Represents a reference counter that keeps the count of shared references to an object.
class RefCount
{
public:
    /// Constructs an instance with the specified initial number of references.
    /// @param value The initial count
    inline RefCount(int value = 0)
        : m_count(value)
    {}
    /// Increments the counter.
    /// @returns The incremented count
    inline int operator ++ ()
    {
        return ++m_count;
    }

    /// Decrements the counter.
    /// @returns The decremented count
    inline int operator -- ()
    {
        const int result = --m_count;
        return result;
    }

    /// Subtracts the specified value from the count.
    /// @param diff The value to subtract
    /// @returns The new count
    inline int operator -= (int diff)
    {
        return m_count -= diff;
    }

    /// Returns the current count.
    inline int get() const
    {
#ifdef ASPOSE_NO_ATOMIC_REFCOUNT
        return m_count;
#else
        return m_count.load();
#endif
    }

    /// Returns the current count.
    inline operator int() const
    {
        return get();
    }

    /// Assigns the specified value as a new count.
    /// @param value The value to assign
    /// @returns A reference to the self
    inline RefCount& operator = (int value)
    {
#ifdef ASPOSE_NO_ATOMIC_REFCOUNT
        m_count = value;
#else
        m_count.store(value);
#endif
        return *this;
    }

    /// Determines if the current count is equal to the specified value.
    /// @param value The value to compare the count with
    /// @returns True if the count is equal to the specified value, otherwise - false
    inline bool operator == (int value) const
    {
        return get() == value;
    }

private:
#ifdef ASPOSE_NO_ATOMIC_REFCOUNT
    /// The count.
    int volatile m_count;
#else
    /// The count.
    std::atomic<int> m_count;
#endif

    // Explicitly deleting 
    RefCount(const RefCount&) = delete;
    RefCount& operator = (const RefCount&) = delete;
};


} } // System::Detail

/// Determines if the count represented by the specified RefCount object is equal to the specified value.
/// @param value The value to compare the count with
/// @param rc The RefCount object representing the count
/// @returns True if the count represented by @p rc is equal to @p value, otherwise - false
inline bool operator == (int value, const System::Detail::RefCount &rc)
{
    return rc == value;
}


#endif
