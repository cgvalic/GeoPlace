//
//  main-plot-solution.cpp
//  plot the solution, the footprints and their placements over the domain.
//
//
//// Copyright 2016 Sandia Corporation. Under the terms of Contract DE-AC04-94AL85000,
//// there is a non-exclusive license for use of this work by or on behalf of the U.S. Government.
//// Export of this program may require a license from the United States Government.
////
////  Created by Scott Alan Mitchell on 4/09/15.
//  Copyright (c) 2015 Sandia National Labs darts team. All rights reserved.
//

#include "diskcover.hpp"

// =========================

int main(int argc, char *argv[])
{
#pragma region Main:
  std::cout << "Copyright 2016 Sandia Corporation. Under the terms of Contract DE-AC04-94AL85000, there is a non-exclusive license for use of this work by or on behalf of the U.S. Government. Export of this program may require a license from the United States Government." << std::endl;
  clock_t start_time, end_time; double cpu_time;
  start_time = clock();
  
  std::cout << std::endl << "Diskcover-plot-solution: plotting solution, the footprints and their placements over the domain." << std::endl;

  // initialize RNG
  init_RNG(1);
  
  // =========== display the final solution
  find_solution_coverage( "solution.txt" );
  
  // ============= finish
  
  std::cout<< "\n*** Mission Accomplished ***." << std::endl;
  
  // performance stats
  end_time = clock();
  cpu_time = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;
  std::cout << "Total runtime for all algorithms = " << cpu_time;
  
  // wait for keypress for debugging
//  char dummy_cc;
//  std::cout<< "\n*** enter q to quit ...";
//  std::cin >> dummy_cc;
  
  std::cout << std::endl;
  return 0;
  
#pragma endregion
};

