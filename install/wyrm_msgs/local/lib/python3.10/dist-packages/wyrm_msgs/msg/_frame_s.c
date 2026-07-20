// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from wyrm_msgs:msg/Frame.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "wyrm_msgs/msg/detail/frame__struct.h"
#include "wyrm_msgs/msg/detail/frame__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "wyrm_msgs/msg/detail/rigid_body__functions.h"
// end nested array functions include
bool wyrm_msgs__msg__rigid_body__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * wyrm_msgs__msg__rigid_body__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool wyrm_msgs__msg__frame__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[27];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("wyrm_msgs.msg._frame.Frame", full_classname_dest, 26) == 0);
  }
  wyrm_msgs__msg__Frame * ros_message = _ros_message;
  {  // frame_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "frame_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->frame_id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->timestamp = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // precision_timestamp_secs
    PyObject * field = PyObject_GetAttrString(_pymsg, "precision_timestamp_secs");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->precision_timestamp_secs = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // precision_timestamp_fractional_secs
    PyObject * field = PyObject_GetAttrString(_pymsg, "precision_timestamp_fractional_secs");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->precision_timestamp_fractional_secs = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // is_recording
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_recording");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_recording = (Py_True == field);
    Py_DECREF(field);
  }
  {  // model_list_changed
    PyObject * field = PyObject_GetAttrString(_pymsg, "model_list_changed");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->model_list_changed = (Py_True == field);
    Py_DECREF(field);
  }
  {  // body_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "body_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->body_count = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // bodies
    PyObject * field = PyObject_GetAttrString(_pymsg, "bodies");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'bodies'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!wyrm_msgs__msg__RigidBody__Sequence__init(&(ros_message->bodies), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create wyrm_msgs__msg__RigidBody__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    wyrm_msgs__msg__RigidBody * dest = ros_message->bodies.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!wyrm_msgs__msg__rigid_body__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * wyrm_msgs__msg__frame__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Frame */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("wyrm_msgs.msg._frame");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Frame");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  wyrm_msgs__msg__Frame * ros_message = (wyrm_msgs__msg__Frame *)raw_ros_message;
  {  // frame_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->frame_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "frame_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // timestamp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // precision_timestamp_secs
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->precision_timestamp_secs);
    {
      int rc = PyObject_SetAttrString(_pymessage, "precision_timestamp_secs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // precision_timestamp_fractional_secs
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->precision_timestamp_fractional_secs);
    {
      int rc = PyObject_SetAttrString(_pymessage, "precision_timestamp_fractional_secs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_recording
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_recording ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_recording", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // model_list_changed
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->model_list_changed ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "model_list_changed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // body_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->body_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "body_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bodies
    PyObject * field = NULL;
    size_t size = ros_message->bodies.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    wyrm_msgs__msg__RigidBody * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->bodies.data[i]);
      PyObject * pyitem = wyrm_msgs__msg__rigid_body__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "bodies", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
