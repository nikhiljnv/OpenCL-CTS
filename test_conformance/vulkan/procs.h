//
// Copyright (c) 2022 The Khronos Group Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#include "harness/mt19937.h"

extern int test_vulkan_interop_buffer(cl_device_id device, cl_context context,
                                      cl_command_queue queue, int num_elements);
extern int test_vulkan_interop_image(cl_device_id device, cl_context context,
                                     cl_command_queue queue, int num_elements);
extern int test_consistency_external_buffer(cl_device_id device,
                                            cl_context context,
                                            cl_command_queue queue,
                                            int num_elements);
extern int test_consistency_external_image(cl_device_id device,
                                           cl_context context,
                                           cl_command_queue queue,
                                           int num_elements);
extern int test_consistency_external_semaphore(cl_device_id device,
                                               cl_context context,
                                               cl_command_queue queue,
                                               int num_elements);
extern int test_platform_info(cl_device_id device, cl_context context,
                              cl_command_queue queue, int num_elements);
extern int test_device_info(cl_device_id device, cl_context context,
                            cl_command_queue queue, int num_elements);

extern int test_external_semaphore_simple_1(cl_device_id deviceID,
                                            cl_context _context,
                                            cl_command_queue _queue,
                                            int num_elements);
extern int test_external_semaphore_simple_2(cl_device_id deviceID,
                                            cl_context _context,
                                            cl_command_queue _queue,
                                            int num_elements);
extern int test_external_semaphore_reuse(cl_device_id deviceID,
                                         cl_context _context,
                                         cl_command_queue _queue,
                                         int num_elements);
extern int test_external_semaphore_cross_queues_ooo(cl_device_id deviceID,
                                                    cl_context _context,
                                                    cl_command_queue _queue,
                                                    int num_elements);
extern int test_external_semaphore_cross_queues_io(cl_device_id deviceID,
                                                   cl_context _context,
                                                   cl_command_queue _queue,
                                                   int num_elements);
extern int test_external_semaphore_multi_signal(cl_device_id deviceID,
                                                cl_context _context,
                                                cl_command_queue _queue,
                                                int num_elements);
extern int test_external_semaphore_multi_wait(cl_device_id deviceID,
                                              cl_context _context,
                                              cl_command_queue _queue,
                                              int num_elements);
extern int test_external_semaphore_queries(cl_device_id deviceID,
                                           cl_context _context,
                                           cl_command_queue _queue,
                                           int num_elements);
extern int test_external_semaphore_order_1(cl_device_id deviceID,
                                           cl_context _context,
                                           cl_command_queue _queue,
                                           int num_elements);
extern int test_external_semaphore_order_2(cl_device_id deviceID,
                                           cl_context _context,
                                           cl_command_queue _queue,
                                           int num_elements);
extern int test_external_semaphore_order_3(cl_device_id deviceID,
                                           cl_context _context,
                                           cl_command_queue _queue,
                                           int num_elements);
extern int test_external_semaphore_invalid_command(cl_device_id deviceID,
                                                   cl_context _context,
                                                   cl_command_queue _queue,
                                                   int num_elements);
