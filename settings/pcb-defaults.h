//
// Default values for generating gcode from a PCB.
//
// These settings were last changed with pcb-gcode-setup: 2020/08/28 9:53
//
//
// Changes you make in this file will be overwritten if you use pcb-gcode-setup.
//

int SINGLE_PASS = NO;
real ISO_MIN = 0.400000;
real ISO_MAX = 0.800000;
real ISO_STEP = 0.320000;

int GENERATE_TOP_OUTLINES = NO;
int GENERATE_TOP_DRILL = NO;
int GENERATE_TOP_FILL = NO;

int GENERATE_BOTTOM_OUTLINES = YES;
int GENERATE_BOTTOM_DRILL = YES;
int GENERATE_BOTTOM_FILL = NO;
int MIRROR_BOTTOM = NO;
int SIMPLE_DRILL_CODE = YES;

int GENERATE_MILLING = YES;

int GENERATE_TEXT = NO;

int SPOT_DRILL = YES;
real SPOT_DRILL_DEPTH = -0.279400;

int DO_TOOL_CHANGE_WITH_ZERO_STEP = NO;

int FLIP_BOARD_IN_Y = NO;

//int OUTPUT_UNITS = U_MICRONS;
int OUTPUT_UNITS = U_MILLIMETERS;
//int OUTPUT_UNITS = U_MILS;
//int OUTPUT_UNITS = U_INCHES;
