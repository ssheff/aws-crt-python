#ifndef AWS_CRT_PYTHON_MQTT_H
#define AWS_CRT_PYTHON_MQTT_H
/*
 * Copyright 2010-2018 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

/**
 * This file includes definitions for MQTT specific functions.
 */

#include "module.h"

#include <aws/mqtt/mqtt.h>

/**
 * Name string for client_connection capsules.
 */
extern const char *s_capsule_name_mqtt_client_connection;

PyObject *mqtt_new_connection(PyObject *self, PyObject *args);
PyObject *mqtt_publish(PyObject *self, PyObject *args);
PyObject *mqtt_subscribe(PyObject *self, PyObject *args);
PyObject *mqtt_unsubscribe(PyObject *self, PyObject *args);
PyObject *mqtt_disconnect(PyObject *self, PyObject *args);

#endif /* AWS_CRT_PYTHON_MQTT_H */