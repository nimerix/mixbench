/**
 * mix_kernels_cpu.h: This file is part of the mixbench GPU micro-benchmark suite.
 *
 * Contact: Elias Konstantinidis <ekondis@gmail.com>
 **/

#ifndef _MIX_KERNELS_CPU_H_
#define _MIX_KERNELS_CPU_H_

#if defined(_MSC_VER)
  using omp_index_t = int64_t;
#else
  using omp_index_t = size_t;
#endif

void mixbenchCPU(double*, omp_index_t);

#endif
