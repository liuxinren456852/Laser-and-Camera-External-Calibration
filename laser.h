
#include <libplayerc/playerc.h>
#include "utils.h"

#ifndef BORDER_THRESHOLD
#define BORDER_THRESHOLD 0.030
#endif

#ifndef MEDIAN_SIZE
#define MEDIAN_SIZE 5
#endif

#ifndef NUMBER_OF_RANGE_PARTICLES
#define NUMBER_OF_RANGE_PARTICLES 10
#endif

typedef struct {
    double_particle leftranges[NUMBER_OF_RANGE_PARTICLES];
    double_particle rightranges[NUMBER_OF_RANGE_PARTICLES];
    playerc_laser_t *laser;
    cone_laser_pos pos;
} cone_detector_ctx;


void init_cone_detector_ctx(cone_detector_ctx *cone_detector, playerc_laser_t *laser);
void calc_cone_pos(cone_detector_ctx *cone_detector);
