#include "filters.h"

static float prev_output = 0.0f;
static const float alpha = 0.1f;  // Low-pass smoothing factor

float Apply_LowPass_Filter(float input) {
    prev_output = alpha * input + (1 - alpha) * prev_output;
    return prev_output;
}
