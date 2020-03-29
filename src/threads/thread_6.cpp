#include "threads.h"

constexpr cert::OutputImage<cert::Color, width, height / 12> frame =
    cert::raytrace<width, height, width, height / 12, 0, 6 * height / 12, samples> ();

cert::OutputImage<cert::Color, width, height / 12> get_frame_6 () { return frame; }
