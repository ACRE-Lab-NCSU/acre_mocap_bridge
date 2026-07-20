# generated from rosidl_generator_py/resource/_idl.py.em
# with input from wyrm_msgs:msg/Frame.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Frame(type):
    """Metaclass of message 'Frame'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('wyrm_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'wyrm_msgs.msg.Frame')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__frame
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__frame
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__frame
            cls._TYPE_SUPPORT = module.type_support_msg__msg__frame
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__frame

            from wyrm_msgs.msg import RigidBody
            if RigidBody.__class__._TYPE_SUPPORT is None:
                RigidBody.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Frame(metaclass=Metaclass_Frame):
    """Message class 'Frame'."""

    __slots__ = [
        '_frame_id',
        '_timestamp',
        '_precision_timestamp_secs',
        '_precision_timestamp_fractional_secs',
        '_is_recording',
        '_model_list_changed',
        '_body_count',
        '_bodies',
    ]

    _fields_and_field_types = {
        'frame_id': 'int32',
        'timestamp': 'double',
        'precision_timestamp_secs': 'uint32',
        'precision_timestamp_fractional_secs': 'uint32',
        'is_recording': 'boolean',
        'model_list_changed': 'boolean',
        'body_count': 'uint32',
        'bodies': 'sequence<wyrm_msgs/RigidBody>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['wyrm_msgs', 'msg'], 'RigidBody')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.frame_id = kwargs.get('frame_id', int())
        self.timestamp = kwargs.get('timestamp', float())
        self.precision_timestamp_secs = kwargs.get('precision_timestamp_secs', int())
        self.precision_timestamp_fractional_secs = kwargs.get('precision_timestamp_fractional_secs', int())
        self.is_recording = kwargs.get('is_recording', bool())
        self.model_list_changed = kwargs.get('model_list_changed', bool())
        self.body_count = kwargs.get('body_count', int())
        self.bodies = kwargs.get('bodies', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.frame_id != other.frame_id:
            return False
        if self.timestamp != other.timestamp:
            return False
        if self.precision_timestamp_secs != other.precision_timestamp_secs:
            return False
        if self.precision_timestamp_fractional_secs != other.precision_timestamp_fractional_secs:
            return False
        if self.is_recording != other.is_recording:
            return False
        if self.model_list_changed != other.model_list_changed:
            return False
        if self.body_count != other.body_count:
            return False
        if self.bodies != other.bodies:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def frame_id(self):
        """Message field 'frame_id'."""
        return self._frame_id

    @frame_id.setter
    def frame_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'frame_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'frame_id' field must be an integer in [-2147483648, 2147483647]"
        self._frame_id = value

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'timestamp' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'timestamp' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._timestamp = value

    @builtins.property
    def precision_timestamp_secs(self):
        """Message field 'precision_timestamp_secs'."""
        return self._precision_timestamp_secs

    @precision_timestamp_secs.setter
    def precision_timestamp_secs(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'precision_timestamp_secs' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'precision_timestamp_secs' field must be an unsigned integer in [0, 4294967295]"
        self._precision_timestamp_secs = value

    @builtins.property
    def precision_timestamp_fractional_secs(self):
        """Message field 'precision_timestamp_fractional_secs'."""
        return self._precision_timestamp_fractional_secs

    @precision_timestamp_fractional_secs.setter
    def precision_timestamp_fractional_secs(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'precision_timestamp_fractional_secs' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'precision_timestamp_fractional_secs' field must be an unsigned integer in [0, 4294967295]"
        self._precision_timestamp_fractional_secs = value

    @builtins.property
    def is_recording(self):
        """Message field 'is_recording'."""
        return self._is_recording

    @is_recording.setter
    def is_recording(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_recording' field must be of type 'bool'"
        self._is_recording = value

    @builtins.property
    def model_list_changed(self):
        """Message field 'model_list_changed'."""
        return self._model_list_changed

    @model_list_changed.setter
    def model_list_changed(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'model_list_changed' field must be of type 'bool'"
        self._model_list_changed = value

    @builtins.property
    def body_count(self):
        """Message field 'body_count'."""
        return self._body_count

    @body_count.setter
    def body_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'body_count' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'body_count' field must be an unsigned integer in [0, 4294967295]"
        self._body_count = value

    @builtins.property
    def bodies(self):
        """Message field 'bodies'."""
        return self._bodies

    @bodies.setter
    def bodies(self, value):
        if __debug__:
            from wyrm_msgs.msg import RigidBody
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, RigidBody) for v in value) and
                 True), \
                "The 'bodies' field must be a set or sequence and each value of type 'RigidBody'"
        self._bodies = value
