#pragma once

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <cglm/cglm.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define CL_TARGET_OPENCL_VERSION 120
#include <CL/opencl.h>
#define FNL_IMPL
#include <FastNoiseLite/FastNoiseLite.h>

#include <Miniaudio/miniaudio.h>

#define DR_WAV_IMPLEMENTATION
#include <Miniaudio/dr_wav.h>