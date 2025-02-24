#pragma once
// Copyright (c) 2001-2015 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace SmartArt {

/// <summary>
/// Represents layout type of a SmartArt diagram.
/// </summary>
enum class SmartArtLayoutType
{
    /// <summary>
    /// Use to show a progression, a timeline, or sequential steps in a task, process, or workflow. Works well for illustrating both Level 1 and Level 2 text.
    /// </summary>
    AccentProcess,
    /// <summary>
    /// Use to show a central, photographic idea with related ideas on the side. The top Level 1 text appears over the central picture. Corresponding text for other Level 1 shapes appear next to the small circular pictures. This layout also works well with no text.
    /// </summary>
    AccentedPicture,
    /// <summary>
    /// Use to show groups of information or sequential steps in a task, process, or workflow. Emphasizes the interaction or relationships among the groups of information.
    /// </summary>
    AlternatingFlow,
    /// <summary>
    /// Use to represent a series of interconnected ideas. Level 1 text appears inside the hexagons. Level 2 text appears outside the shapes.
    /// </summary>
    AlternatingHexagons,
    /// <summary>
    /// Use to show a series of pictures from top to bottom. Text appears alternately on the right or left of the picture.
    /// </summary>
    AlternatingPictureBlocks,
    /// <summary>
    /// Use to show a set of pictures with text. The corresponding text appears in the central circles with the images alternating from left to right.
    /// </summary>
    AlternatingPictureCircles,
    /// <summary>
    /// Use to show either related or contrasting concepts with some connection, such as opposing forces. The first two lines of Level 1 text are used for text in the arrows. Unused text does not appear, but remains available if you switch layouts.
    /// </summary>
    ArrowRibbon,
    /// <summary>
    /// Use to show an ascending series of pictures with descriptive text. Works best with a small amount of text.
    /// </summary>
    AscendingPictureAccentProcess,
    /// <summary>
    /// Use to compare or show the relationship between two ideas. Each of the first two lines of Level 1 text corresponds to text at the top of one side of the center point. Emphasizes Level 2 text, which is limited to four shapes on each side of the center point. The balance tips towards the side with the most shapes containing Level 2 text. Unused text does not appear, but remains available if you switch layouts. 
    /// </summary>
    Balance,
    /// <summary>
    /// Use to show a progression or sequential steps in a task, process, or workflow. Maximizes both horizontal and vertical display space for shapes.
    /// </summary>
    BasicBendingProcess,
    /// <summary>
    /// Use to show non-sequential or grouped blocks of information. Maximizes both horizontal and vertical display space for shapes.
    /// </summary>
    BasicBlockList,
    /// <summary>
    /// Use to show a progression; a timeline; sequential steps in a task, process, or workflow; or to emphasize movement or direction. Level 1 text appears inside an arrow shape while Level 2 text appears below the arrow shapes.
    /// </summary>
    BasicChevronProcess,
    /// <summary>
    /// Use to represent a continuing sequence of stages, tasks, or events in a circular flow. Emphasizes the stages or steps rather than the connecting arrows or flow. Works best with Level 1 text only.
    /// </summary>
    BasicCycle,
    /// <summary>
    /// Use to show the relationship of components to a whole in quadrants. The first four lines of Level 1 text appear in the quadrants. Unused text does not appear, but remains available if you switch layouts.
    /// </summary>
    BasicMatrix,
    /// <summary>
    /// Use to show how individual parts form a whole. The first seven lines of Level 1 text correspond to the evenly distributed wedge or pie shapes. The top Level 1 text shape appears outside of the rest of the pie for emphasis. Unused text does not appear, but remains available if you switch layouts.
    /// </summary>
    BasicPie,
    /// <summary>
    /// Use to show a progression or sequential steps in a task, process, or workflow.
    /// </summary>
    BasicProcess,
    /// <summary>
    /// Use to show proportional, interconnected, or hierarchical relationships with the largest component on the bottom and narrowing up. Level 1 text appears in the pyramid segments and Level 2 text appears in shapes alongside each segment.
    /// </summary>
    BasicPyramid,
    /// <summary>
    /// Use to show the relationship to a central idea in a cycle. The first line of Level 1 text corresponds to the central shape, and its Level 2 text corresponds to the surrounding circular shapes. Unused text does not appear, but remains available if you switch layouts.
    /// </summary>
    BasicRadial,
    /// <summary>
    /// Use to show containment, gradations, or hierarchical relationships. The first five lines of Level 1 text are associated with a circle. Unused text does not appear, but remains available if you switch layouts.
    /// </summary>
    BasicTarget,
    /// <summary>
    /// Use to show sequential steps in a task, process, or workflow, or to show timeline information. Works well with both Level 1 and Level 2 text.
    /// </summary>
    BasicTimeline,
    /// <summary>
    /// Use to show overlapping or interconnected relationships. The first seven lines of Level 1 text correspond with a circle. If there are four or fewer lines of Level 1 text, the text is inside the circles. If there are more than four lines of Level 1 text, the text is outside of the circles. Unused text does not appear, but remains available if you switch layouts.
    /// </summary>
    BasicVenn,
    /// <summary>
    /// Use to show non-sequential or grouped blocks of information. The small circular shapes are designed to contain pictures. Works well for illustrating both Level 1 and Level 2 text. Maximizes both horizontal and vertical display space for shapes.
    /// </summary>
    BendingPictureAccentList,
    /// <summary>
    /// Use to show a series of pictures. The box covering the bottom corner can contain small amounts of text.
    /// </summary>
    BendingPictureBlocks,
    /// <summary>
    /// Use to show a sequential series of pictures. The box covering the bottom corner can contain small amounts of text.
    /// </summary>
    BendingPictureCaption,
    /// <summary>
    /// Use to show a series of pictures. The title and description appear in a callout shape under each picture.
    /// </summary>
    BendingPictureCaptionList,
    /// <summary>
    /// Use to show a series of pictures. A semi-transparent box covers the lower portion of the picture and contains all levels of text.
    /// </summary>
    BendingPictureSemiTransparentText,
    /// <summary>
    /// Use to represent a continuing sequence of stages, tasks, or events in a circular flow. Emphasizes the stages or steps rather than the connecting arrows or flow.
    /// </summary>
    BlockCycle,
    /// <summary>
    /// Use to show a series of pictures. Can contain up to eight Level 1 pictures. Unused text and pictures do not appear, but remain available if you switch layouts. Works best with small amounts of text.
    /// </summary>
    BubblePictureList,
    /// <summary>
    /// Use to show pictures with multiple levels of text.  Works best with a small amount of Level 1 text and a medium amount of Level 2 text.
    /// </summary>
    CaptionedPictures,
    /// <summary>
    /// Use to show a progression through several processes that make up an overall workflow. Also works for illustrating contrasting processes. The Level 1 text corresponds to the first arrow shape on the left, while the Level 2 text corresponds to horizontal sub-steps for each shape that contains Level 1 text.
    /// </summary>
    ChevronList,
    /// <summary>
    /// Use to show a series of events or timeline information. Level 1 text appears next to larger circular shapes. Level 2 text appears next to smaller circular shapes.
    /// </summary>
    CircleAccentTimeline,
    /// <summary>
    /// Use to show sequential items with supporting text for each item. This diagram works best with small amounts of Level 1 text.
    /// </summary>
    CircleArrowProcess,
    /// <summary>
    /// Use to show hierarchical information or reporting relationships in an organization. Pictures appear in circles and corresponding text appears next to the pictures.
    /// </summary>
    CirclePictureHierarchy,
    /// <summary>
    /// Use to show the relationship to or from a central idea. Level 2 text is added non-sequentially and is limited to five items. There can only be one Level 1 item.
    /// </summary>
    CircleRelationship,
    /// <summary>
    /// Use to show a long or non-linear sequence or steps in a task, process, or workflow. Works best with Level 1 text only. Maximizes both horizontal and vertical display space for shapes.
    /// </summary>
    CircularBendingProcess,
    /// <summary>
    /// Use to show a central idea and sub-ideas or related items. The text for the first picture covers the lower portion of the picture. The corresponding text for other Level 1 shapes appears next to the small circular pictures. This diagram also works well with no text.
    /// </summary>
    CircularPictureCallout,
    /// <summary>
    /// Use to show a progression, a timeline, or sequential steps in a task, process, or workflow, or to emphasize movement or direction. Can be used to emphasize information in the starting shape. Works best with Level 1 text only.
    /// </summary>
    ClosedChevronProcess,
    /// <summary>
    /// Use to show a timeline or sequential steps in a task, process, or workflow. Works best with Level 1 text because each line of Level 1 text appears inside the arrow shape. Level 2 text appears outside the arrow shape.
    /// </summary>
    ContinuousArrowProcess,
    /// <summary>
    /// Use to show a progression or sequential steps in a task, process, or workflow. Works best with minimal Level 1 and Level 2 text.
    /// </summary>
    ContinuousBlockProcess,
    /// <summary>
    /// Use to represent a continuing sequence of stages, tasks, or events in a circular flow. Emphasizes the connection between all components. Works best with Level 1 text only.
    /// </summary>
    ContinuousCycle,
    /// <summary>
    /// Use to show groups of interconnected information. The circular shapes are designed to contain pictures.
    /// </summary>
    ContinuousPictureList,
    /// <summary>
    /// Use to show ideas or concepts that converge to a central point. Works best with Level 1 text only.
    /// </summary>
    ConvergingArrows,
    /// <summary>
    /// Use to show relationships of concepts or components to a central idea in a cycle. The first line of Level 1 text corresponds to the central circular shape and the lines of Level 2 text correspond to the surrounding rectangular shapes. Unused text does not appear, but remains available if you switch layouts.
    /// </summary>
    ConvergingRadial,
    /// <summary>
    /// Use to show two opposing ideas or concepts. Each of the first two lines of Level 1 text corresponds to an arrow and works well with Level 2 text. Unused text does not appear, but remains available if you switch layouts.
    /// </summary>
    CounterbalanceArrows,
    /// <summary>
    /// Use to show the relationship to a central idea in a cyclical progression. Each of the first four lines of Level 1 text corresponds to a wedge or pie shape, and Level 2 text appears in a rectangular shape to the side of the wedge or pie shape. Unused text does not appear, but remains available if you switch layouts.
    /// </summary>
    CycleMatrix,
    /// <summary>
    /// Use to show groups of related ideas or lists of information. The text shapes decrease in height sequentially, and the Level 1 text displays vertically.
    /// </summary>
    DescendingBlockList,
    /// <summary>
    /// Use to show a descending series of events. The first Level 1 text is at the top of arrow, and the last Level 1 text displays at the bottom of the arrow. Only the first seven Level 1 items appear. Works best with small to medium amounts of text.
    /// </summary>
    DescendingProcess,
    /// <summary>
    /// Use with large amounts of Level 2 text to show a progression through stages.
    /// </summary>
    DetailedProcess,
    /// <summary>
    /// Use to show ideas or concepts that progress outward from a central source. Works best with Level 1 text only.
    /// </summary>
    DivergingArrows,
    /// <summary>
    /// Use to show relationships to a central idea in a cycle. The first Level 1 line of text corresponds to the central circular shape. Emphasizes the surrounding circles rather than the central idea. Unused text does not appear, but remains available if you switch layouts.
    /// </summary>
    DivergingRadial,
    /// <summary>
    /// Use to show sequential steps or tasks that depict a plan or result. The last Level 1 line of text appears after the equals sign (=).Works best with Level 1 text only.
    /// </summary>
    Equation,
    /// <summary>
    /// Use to show pictures with corresponding Level 1 text displayed in a frame.
    /// </summary>
    FramedTextPicture,
    /// <summary>
    /// Use to show the filtering of information or how parts merge into a whole. Emphasizes the final outcome. Can contain up to four lines of Level 1 text; the last of these four Level 1 text lines appears below the funnel and the other lines  correspond to a circular shape. Unused text does not appear, but remains available if you switch layouts.
    /// </summary>
    Funnel,
    /// <summary>
    /// Use to show interlocking ideas. Each of the first three lines of Level 1 text corresponds to a gear shape, and their corresponding Level 2 text appears in rectangles next to the gear shape. Unused text does not appear, but remains available if you switch layouts.
    /// </summary>
    Gear,
    /// <summary>
    /// Use to show the placement of concepts along two axes. Emphasizes the individual components rather than the whole. The first four lines of Level 1 text appear in the quadrants. Unused text does not appear, but remains available if you switch layouts.
    /// </summary>
    GridMatrix,
    /// <summary>
    /// Use to show groups and sub-groups of information, or steps and sub-steps in a task, process, or workflow. Level 1 text corresponds to the top level horizontal shapes, and Level 2 text corresponds to vertical sub-steps under each related top level shape. Works well for emphasizing sub-groups or sub-steps, hierarchical information, or multiple lists of information.
    /// </summary>
    GroupedList,
    /// <summary>
    /// Use to show hierarchical information or reporting relationships in an organization. The assistant shapes and Org Chart hanging layouts are available with this layout. 
    /// </summary>
    HalfCircleOrganizationChart,
    /// <summary>
    /// Use to show pictures with associated descriptive text. Small hexagons indicate the picture and text pair. Works best with small amounts of text.
    /// </summary>
    HexagonCluster,
    /// <summary>
    /// Use to show hierarchical relationships progressing from top to bottom.
    /// </summary>
    Hierarchy,
    /// <summary>
    /// Use to show hierarchical relationships progressing across groups. Can also be used to group or list information.
    /// </summary>
    HierarchyList,
    /// <summary>
    /// Use to show non-sequential or grouped lists of information. Works well with large amounts of text. All text has the same level of emphasis, and direction is not implied.
    /// </summary>
    HorizontalBulletList,
    /// <summary>
    /// Use to show hierarchical relationships progressing horizontally. Works well for decision trees.
    /// </summary>
    HorizontalHierarchy,
    /// <summary>
    /// Use to show hierarchical relationships progressing horizontally and grouped hierarchically. Emphasizes heading or level 1 text. The first line of Level 1 text appears in the shape at the beginning of the hierarchy, and the second and all subsequent lines of Level 1 text appear at the top of the tall rectangles.
    /// </summary>
    HorizontalLabeledHierarchy,
    /// <summary>
    /// Use to show large amounts of hierarchical information progressing horizontally. The top of the hierarchy is displayed vertically. This layout supports many levels in the hierarchy.
    /// </summary>
    HorizontalMultiLevelHierarchy,
    /// <summary>
    /// Use to show hierarchical information horizontally or reporting relationships in an organization. The assistant shape and the Org Chart hanging layouts are available with this layout.
    /// </summary>
    HorizontalOrganizationChart,
    /// <summary>
    /// Use to show non-sequential or grouped information with an emphasis on related pictures. The top shapes are designed to contain pictures.
    /// </summary>
    HorizontalPictureList,
    /// <summary>
    /// Use to show sequential and overlapping steps in a process. Limited to five Level 1 items. Level 2 can contain large amounts of text.
    /// </summary>
    IncreasingArrowsProcess,
    /// <summary>
    /// Use to show a series of steps, with the interior of the circle increasing with each step. Limited to seven Level 1 steps but unlimited Level 2 items. Works well with large amounts of Level 2 text.
    /// </summary>
    IncreasingCircleProcess,
    /// <summary>
    /// Use to show proportional, interconnected, or hierarchical relationships with the largest component on the top and narrowing down. Level 1 text appears in the pyramid segments and Level 2 text appears in shapes alongside each segment.
    /// </summary>
    InvertedPyramid,
    /// <summary>
    /// Use to show hierarchical relationships progressing from top to bottom and grouped hierarchically. Emphasizes heading or level 1 text. The first line of Level 1 text appears in the shape at the beginning of the hierarchy, and all subsequent lines of Level 1 text appear to the left of the long rectangles.
    /// </summary>
    LabeledHierarchy,
    /// <summary>
    /// Use to show overlapping relationships in a sequence. Works best with Level 1 text only.
    /// </summary>
    LinearVenn,
    /// <summary>
    /// Use to show large amounts of text divided into categories and subcategories. Works well with multiple levels of text. Text at the same level is separated by lines.
    /// </summary>
    LinedList,
    /// <summary>
    /// Use to represent a continuing sequence of stages, tasks, or events that can occur in any direction.
    /// </summary>
    MultidirectionalCycle,
    /// <summary>
    /// Use to show hierarchical information or reporting relationships in an organization. To enter text in the title box, type directly in the smaller rectangular shape. The assistant shape and Org Chart hanging layouts are available with this layout.
    /// </summary>
    NameandTitleOrganizationChart,
    /// <summary>
    /// Use to show containment relationships. Each of the first three lines of Level 1 text correspond to the upper left text in the shapes, and Level 2 text corresponds to the smaller shapes. Works best with minimal Level 2 lines of text. Unused text does not appear, but remains available if you switch layouts.
    /// </summary>
    NestedTarget,
    /// <summary>
    /// Use to represent a continuing sequence of stages, tasks, or events in a circular flow. Each shape has the same level of importance. Works well when direction does not need to be indicated.
    /// </summary>
    NondirectionalCycle,
    /// <summary>
    /// Use to show two opposing ideas, or ideas that diverge from a central point. Each of the first two lines of Level 1 text corresponds to an arrow. Unused text does not appear, but remains available if you switch layouts.
    /// </summary>
    OpposingArrows,
    /// <summary>
    /// Use to show two opposing or contrasting ideas. Can have one or two Level 1 items. Each Level 1 text can contain multiple sub-levels. Works well with large amounts of text.
    /// </summary>
    OpposingIdeas,
    /// <summary>
    /// Use to show hierarchical information or reporting relationships in an organization. The assistant shape and the Org Chart hanging layouts are available with this layout.
    /// </summary>
    OrganizationChart,
    /// <summary>
    /// Use to show three phases of a process. Limited to three Level 1 items. The first two Level 1 items can each contain four Level 2 items, and the third Level 1 item can contain an unlimited number of Level 2 items.  Works best with small amounts of text.
    /// </summary>
    PhasedProcess,
    /// <summary>
    /// Use to show a group of pictures in blocks starting from the corner. The corresponding text displays vertically. Works well as an accent on title or sub-title slides or for section breaks of a document.
    /// </summary>
    PictureAccentBlocks,
    /// <summary>
    /// Use to show grouped or related information. The small shapes on the upper corners are designed to contain pictures. Emphasizes Level 2 text over Level 1 text, and is a good choice for large amounts of Level 2 text.
    /// </summary>
    PictureAccentList,
    /// <summary>
    /// Use to show sequential steps in a task, process, or workflow. The rectangular shapes in the background are designed to contain pictures.
    /// </summary>
    PictureAccentProcess,
    /// <summary>
    /// Use to show non-sequential or grouped blocks of information. The top shapes are designed to contain pictures and pictures are emphasized over text. Works well for pictures with short text captions.
    /// </summary>
    PictureCaptionList,
    /// <summary>
    /// Use to show pictures laid out on a square grid. Best with a small amount of Level 1 text, which appears above the picture.
    /// </summary>
    PictureGrid,
    /// <summary>
    /// Use to show a series of pictures side by side. Level 1 text covers the top of the picture. Level 2 text appears below the picture.
    /// </summary>
    PictureLineup,
    /// <summary>
    /// Use to show a series of pictures from top to bottom with Level 1 text beside each.
    /// </summary>
    PictureStrips,
    /// <summary>
    /// Use to show steps in a process with each pie slice increasing in size up to seven shapes.  Level 1 text displays vertically.
    /// </summary>
    PieProcess,
    /// <summary>
    /// Use to show the pros and cons of  two ideas. Each Level 1 text can contain multiple sub-levels. Works well with large amounts of text. Limited to two Level 1 items.
    /// </summary>
    PlusandMinus,
    /// <summary>
    /// Use to show information illustrating a process or workflow. Level 1 text appears in the circular shapes and Level 2 text appears in the arrow shapes. Works best for minimal text and to emphasize movement or direction.
    /// </summary>
    ProcessArrows,
    /// <summary>
    /// Use to show multiple groups of information or steps and sub-steps in a task, process, or workflow. Level 1 text corresponds to the top horizontal shapes, and Level 2 text corresponds to vertical sub-steps under each related top level shape.
    /// </summary>
    ProcessList,
    /// <summary>
    /// Use to show proportional, interconnected, or hierarchical relationships. Text appears in the rectangular shapes on top of the pyramid background.
    /// </summary>
    PyramidList,
    /// <summary>
    /// Use to show data that relates to a central idea or theme. The top Level 1 text appears in the center. Level 2 text appears in surrounding shapes. Can contain up to seven Level 2 shapes. Unused text does not appear, but remains available if you switch layouts. Works best with small amounts of text.
    /// </summary>
    RadialCluster,
    /// <summary>
    /// Use to show the relationship to a central idea. Emphasizes both information in the center circle and how information in the outer ring of circles contributes to the central idea. The first Level 1 line of text corresponds to the central circle, and its Level 2 text corresponds to the outer ring of circles. Unused text does not appear, but remains available if you switch layouts.
    /// </summary>
    RadialCycle,
    /// <summary>
    /// Use to show relationships to a central idea in a cycle. The center shape can contain a picture. Level 1 text appears in the smaller circles and any related Level 2 text appears to the side of the smaller circles.
    /// </summary>
    RadialList,
    /// <summary>
    /// Use to show both overlapping relationships and the relationship to a central idea in a cycle. The first line of Level 1 text corresponds to the central shape and the lines of Level 2 text correspond to the surrounding circular shapes. Unused text does not appear, but remains available if you switch layouts.
    /// </summary>
    RadialVenn,
    /// <summary>
    /// Use to show, through a series of steps, how several chaotic  ideas can result in a unified goal or idea. Supports multiple items of Level 1 text, but the first and last Level 1 corresponding shapes are fixed. Works best with small amounts of Level 1 text and medium amounts of Level 2 text.
    /// </summary>
    RandomToResultProcess,
    /// <summary>
    /// Use to show a progression or sequential steps in a task, process, or workflow. Maximizes both horizontal and vertical display space for shapes.
    /// </summary>
    RepeatingBendingProcess,
    /// <summary>
    /// Use to change between two items. Only the first two items of text display, and each item can contain a large amount of text. Works well to show a change between two items or shift in order.
    /// </summary>
    ReverseList,
    /// <summary>
    /// Use to show a progression or a sequence of stages, tasks, or events in a circular flow. Emphasizes the interconnected pieces. Each of the first seven lines of Level 1 text corresponds to a wedge or pie shape. Unused text does not appear, but remains available if you switch layouts.
    /// </summary>
    SegmentedCycle,
    /// <summary>
    /// Use to show a progression or sequential steps in a task, process, or workflow. Emphasizes Level 2 text, since each line appears in a separate shape.
    /// </summary>
    SegmentedProcess,
    /// <summary>
    /// Use to show containment, proportional, or interconnected relationships. The first nine lines of Level 1 text appear in the triangular shapes. Unused text does not appear, but remains available if you switch layouts. Works best with Level 1 text only.
    /// </summary>
    SegmentedPyramid,
    /// <summary>
    /// Use to show pictures with explanatory text. Level 2 text can display lists of information. Works well with a large amount of  text.
    /// </summary>
    SnapshotPictureList,
    /// <summary>
    /// Use to show a series of up to five pictures with corresponding Level 1 captions that spiral in to the center. 
    /// </summary>
    SpiralPicture,
    /// <summary>
    /// Use to show lists of information divided into categories. Level 2 text appears beside a small square shape. Works well with large amounts of Level 2 text. 
    /// </summary>
    SquareAccentList,
    /// <summary>
    /// Use to show groups of information or steps in a task, process, or workflow. Circular shapes contain Level 1 text, and the corresponding rectangles contain Level 2 text. Works well for numerous details and minimal Level 1 text.
    /// </summary>
    StackedList,
    /// <summary>
    /// Use to show overlapping relationships. A good choice for emphasizing growth or gradation. Works best with Level 1 text only. The first seven lines of Level 1 text correspond to a circular shape. Unused text does not appear, but remains available if you switch layouts.
    /// </summary>
    StackedVenn,
    /// <summary>
    /// Use to show a downward progression through stages. Each of the first five lines of Level 1 text corresponds with a rectangle. Unused text does not appear, but remains available if you switch layouts.
    /// </summary>
    StaggeredProcess,
    /// <summary>
    /// Use to show a descending process with multiple steps and sub-steps. Works best with small amounts of text.
    /// </summary>
    StepDownProcess,
    /// <summary>
    /// Use to show an ascending series of steps or lists of information.
    /// </summary>
    StepUpProcess,
    /// <summary>
    /// Use to show a multi-step process with sub-steps between each instance of Level 1 text. Works best with small amounts of text and is limited to seven Level 1 steps. Each Level 1 step can have unlimited sub-steps.
    /// </summary>
    SubStepProcess,
    /// <summary>
    /// Use to show groups of information built from top to bottom, and the hierarchies within each group. This layout does not contain connecting lines.
    /// </summary>
    TableHierarchy,
    /// <summary>
    /// Use to show grouped or related information of equal value. The first Level 1 line of text corresponds to the top shape and its Level 2 text is used for the subsequent lists.
    /// </summary>
    TableList,
    /// <summary>
    /// Use to show interrelated or overlapping information. Each of the first seven lines of Level 1 text appears in the rectangular shape. Unused text does not appear, but remains available if you switch layouts. Works well with both Level 1 and Level 2 text.
    /// </summary>
    TargetList,
    /// <summary>
    /// Use to represent a continuing sequence of stages, tasks, or events in a circular flow. Emphasizes the arrows or flow rather than the stages or steps. Works best with Level 1 text only.
    /// </summary>
    TextCycle,
    /// <summary>
    /// Use to show a series of pictures that each have their own title and description. Level 1 text appears in the box above the picture. Level 2 text appears below the picture.
    /// </summary>
    TitlePictureLineup,
    /// <summary>
    /// Use to show the relationships of four quadrants to a whole. The first line of Level 1 text corresponds to the central shape, and the first four lines of Level 2 text appear in the quadrants. Unused text does not appear, but remains available if you switch layouts.
    /// </summary>
    TitledMatrix,
    /// <summary>
    /// Use to show lists of information with an accent picture for each Level 2 text. Level 1 text displays in a separate box at the top of the list.
    /// </summary>
    TitledPictureAccentList,
    /// <summary>
    /// Use to show a series of pictures. Level 1 text appears above each picture. Level 2 text appears to the side and slightly overlapping each picture.
    /// </summary>
    TitledPictureBlocks,
    /// <summary>
    /// Use to show grouped or related information of equal value. Works well with large amounts of text.
    /// </summary>
    TrapezoidList,
    /// <summary>
    /// Use to show a progression or steps that trend upward in a task, process, or workflow. Each of the first five lines of Level 1 text corresponds to a point on the arrow. Works best with minimal text. Unused text does not appear, but remains available if you switch layouts.
    /// </summary>
    UpwardArrow,
    /// <summary>
    /// Use to show lists of information. Level 2 text appears in rectangular shapes over vertical chevrons. Emphasizes Level 2 text over Level 1 text, and is a good choice for medium amounts of Level 2 text.
    /// </summary>
    VerticalAccentList,
    /// <summary>
    /// Use to show a progression or sequential steps in a task, process, or workflow that move toward a common goal. Works well for bulleted lists of information.
    /// </summary>
    VerticalArrowList,
    /// <summary>
    /// Use to show a progression or sequential steps in a task, process, or workflow. Maximizes both horizontal and vertical display space for shapes. Places more emphasis on the interrelationships among the shapes than on direction or movement.
    /// </summary>
    VerticalBendingProcess,
    /// <summary>
    /// Use to show groups of information or steps in a task, process, or workflow. Works well with large amounts of Level 2 text. A good choice for text with a main point and multiple sub-points.
    /// </summary>
    VerticalBlockList,
    /// <summary>
    /// Use to show several groups of information, especially groups with large amounts of Level 2 text. A good choice for bulleted lists of information.
    /// </summary>
    VerticalBoxList,
    /// <summary>
    /// Use to show non-sequential or grouped blocks of information. Works well for lists with long headings or top level information.
    /// </summary>
    VerticalBulletList,
    /// <summary>
    /// Use to show a progression or sequential steps in a task, process, or workflow, or to emphasize movement or direction. Emphasizes Level 2 text over Level 1 text, and is a good choice for large amounts of Level 2 text.
    /// </summary>
    VerticalChevronList,
    /// <summary>
    /// Use to show sequential or grouped data. Works best for Level 1 text, which displays next to a large circular shape. Lower levels of text are separated with smaller circular shapes.
    /// </summary>
    VerticalCircleList,
    /// <summary>
    /// Use to show a curved list of information. To add pictures to the accent circle shapes, apply a picture fill.
    /// </summary>
    VerticalCurvedList,
    /// <summary>
    /// Use to show sequential steps or tasks that depict a plan or result. The last Level 1 line of text appears after the arrow. Works best with Level 1 text only.
    /// </summary>
    VerticalEquation,
    /// <summary>
    /// Use to show non-sequential or grouped blocks of information. The small circles are designed to contain pictures.
    /// </summary>
    VerticalPictureAccentList,
    /// <summary>
    /// Use to show non-sequential or grouped blocks of information. The small shapes on the left are designed to contain pictures.
    /// </summary>
    VerticalPictureList,
    /// <summary>
    /// Use to show a progression or sequential steps in a task, process, or workflow from top to bottom. Works best with Level 1 text, since the vertical space is limited.
    /// </summary>
    VerticalProcess,
    /// <summary>
    /// Represents a SmartArt diagram with custom layout template
    /// </summary>
    Custom,
    /// <summary>
    /// Use to show hierarchical information or reporting relationships in an organization, with corresponding pictures. The assistant shape and Org Chart hanging layouts are available with this layout.
    /// </summary>
    PictureOrganizationChart
};

} // namespace SmartArt
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::SmartArt::SmartArtLayoutType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::SmartArt::SmartArtLayoutType, const char_t*>, 136>& values();
};
/// @endcond



