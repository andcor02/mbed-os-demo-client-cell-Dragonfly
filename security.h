/*
 * Copyright (c) 2015 ARM Limited. All rights reserved.
 * SPDX-License-Identifier: Apache-2.0
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef __SECURITY_H__
#define __SECURITY_H__

#include <inttypes.h>

#define MBED_DOMAIN "3b168434-9e70-4799-86eb-539e82d36f7a"
#define MBED_ENDPOINT_NAME "04db596f-56ba-4629-b691-32462037f6fd"

const uint8_t SERVER_CERT[] = "-----BEGIN CERTIFICATE-----\r\n"
"MIIBmDCCAT6gAwIBAgIEVUCA0jAKBggqhkjOPQQDAjBLMQswCQYDVQQGEwJGSTEN\r\n"
"MAsGA1UEBwwET3VsdTEMMAoGA1UECgwDQVJNMQwwCgYDVQQLDANJb1QxETAPBgNV\r\n"
"BAMMCEFSTSBtYmVkMB4XDTE1MDQyOTA2NTc0OFoXDTE4MDQyOTA2NTc0OFowSzEL\r\n"
"MAkGA1UEBhMCRkkxDTALBgNVBAcMBE91bHUxDDAKBgNVBAoMA0FSTTEMMAoGA1UE\r\n"
"CwwDSW9UMREwDwYDVQQDDAhBUk0gbWJlZDBZMBMGByqGSM49AgEGCCqGSM49AwEH\r\n"
"A0IABLuAyLSk0mA3awgFR5mw2RHth47tRUO44q/RdzFZnLsAsd18Esxd5LCpcT9w\r\n"
"0tvNfBv4xJxGw0wcYrPDDb8/rjujEDAOMAwGA1UdEwQFMAMBAf8wCgYIKoZIzj0E\r\n"
"AwIDSAAwRQIhAPAonEAkwixlJiyYRQQWpXtkMZax+VlEiS201BG0PpAzAiBh2RsD\r\n"
"NxLKWwf4O7D6JasGBYf9+ZLwl0iaRjTjytO+Kw==\r\n"
"-----END CERTIFICATE-----\r\n";

const uint8_t CERT[] = "-----BEGIN CERTIFICATE-----\r\n"
"MIIBzzCCAXOgAwIBAgIEBUmwHjAMBggqhkjOPQQDAgUAMDkxCzAJBgNVBAYTAkZ\r\n"
"JMQwwCgYDVQQKDANBUk0xHDAaBgNVBAMME21iZWQtY29ubmVjdG9yLTIwMTgwHh\r\n"
"cNMTcwMjI0MTMwNDQ5WhcNMTgxMjMxMDYwMDAwWjCBoTFSMFAGA1UEAxNJM2IxN\r\n"
"jg0MzQtOWU3MC00Nzk5LTg2ZWItNTM5ZTgyZDM2ZjdhLzA0ZGI1OTZmLTU2YmEt\r\n"
"NDYyOS1iNjkxLTMyNDYyMDM3ZjZmZDEMMAoGA1UECxMDQVJNMRIwEAYDVQQKEwl\r\n"
"tYmVkIHVzZXIxDTALBgNVBAcTBE91bHUxDTALBgNVBAgTBE91bHUxCzAJBgNVBA\r\n"
"YTAkZJMFkwEwYHKoZIzj0CAQYIKoZIzj0DAQcDQgAEqRPZ2/Nmda54wFgoXUy1Q\r\n"
"F9H7d1j6NDynoF63l+7xfAYjD8As/bvveXHqJcsVRP6Y1T+p+fNsawtScXw9ZS5\r\n"
"tDAMBggqhkjOPQQDAgUAA0gAMEUCIDHgkY4YOVO91yXqWlUaaLuPGfHKu/FXjHp\r\n"
"OnKB2eAR6AiEAzWvCkTiUIoLfknJ95IBw7LZA/qO3NtB7Jpwx0RW/Ufo=\r\n"
"-----END CERTIFICATE-----\r\n";

const uint8_t KEY[] = "-----BEGIN PRIVATE KEY-----\r\n"
"MIGHAgEAMBMGByqGSM49AgEGCCqGSM49AwEHBG0wawIBAQQgwIK4BXkmFpCkQIo4\r\n"
"dFkLd5VRQ6joE0pmeKdE1CD5UDGhRANCAASpE9nb82Z1rnjAWChdTLVAX0ft3WPo\r\n"
"0PKegXreX7vF8BiMPwCz9u+95ceolyxVE/pjVP6n582xrC1JxfD1lLm0\r\n"
"-----END PRIVATE KEY-----\r\n";

#endif //__SECURITY_H__
