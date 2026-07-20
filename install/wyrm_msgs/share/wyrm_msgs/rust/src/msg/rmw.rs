#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "wyrm_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__wyrm_msgs__msg__Description() -> *const std::ffi::c_void;
}

#[link(name = "wyrm_msgs__rosidl_generator_c")]
extern "C" {
    fn wyrm_msgs__msg__Description__init(msg: *mut Description) -> bool;
    fn wyrm_msgs__msg__Description__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Description>, size: usize) -> bool;
    fn wyrm_msgs__msg__Description__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Description>);
    fn wyrm_msgs__msg__Description__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Description>, out_seq: *mut rosidl_runtime_rs::Sequence<Description>) -> bool;
}

// Corresponds to wyrm_msgs__msg__Description
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Description {

    // This member is not documented.
    #[allow(missing_docs)]
    pub id: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub parent_id: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub num_markers: i32,

}



impl Default for Description {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !wyrm_msgs__msg__Description__init(&mut msg as *mut _) {
        panic!("Call to wyrm_msgs__msg__Description__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Description {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { wyrm_msgs__msg__Description__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { wyrm_msgs__msg__Description__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { wyrm_msgs__msg__Description__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Description {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Description where Self: Sized {
  const TYPE_NAME: &'static str = "wyrm_msgs/msg/Description";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__wyrm_msgs__msg__Description() }
  }
}


#[link(name = "wyrm_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__wyrm_msgs__msg__RigidBody() -> *const std::ffi::c_void;
}

#[link(name = "wyrm_msgs__rosidl_generator_c")]
extern "C" {
    fn wyrm_msgs__msg__RigidBody__init(msg: *mut RigidBody) -> bool;
    fn wyrm_msgs__msg__RigidBody__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RigidBody>, size: usize) -> bool;
    fn wyrm_msgs__msg__RigidBody__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RigidBody>);
    fn wyrm_msgs__msg__RigidBody__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RigidBody>, out_seq: *mut rosidl_runtime_rs::Sequence<RigidBody>) -> bool;
}

// Corresponds to wyrm_msgs__msg__RigidBody
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RigidBody {

    // This member is not documented.
    #[allow(missing_docs)]
    pub id: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub position: geometry_msgs::msg::rmw::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub orientation: geometry_msgs::msg::rmw::Quaternion,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mean_error: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tracking_lost: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub model_filled: bool,

}



impl Default for RigidBody {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !wyrm_msgs__msg__RigidBody__init(&mut msg as *mut _) {
        panic!("Call to wyrm_msgs__msg__RigidBody__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RigidBody {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { wyrm_msgs__msg__RigidBody__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { wyrm_msgs__msg__RigidBody__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { wyrm_msgs__msg__RigidBody__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RigidBody {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RigidBody where Self: Sized {
  const TYPE_NAME: &'static str = "wyrm_msgs/msg/RigidBody";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__wyrm_msgs__msg__RigidBody() }
  }
}


#[link(name = "wyrm_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__wyrm_msgs__msg__Frame() -> *const std::ffi::c_void;
}

#[link(name = "wyrm_msgs__rosidl_generator_c")]
extern "C" {
    fn wyrm_msgs__msg__Frame__init(msg: *mut Frame) -> bool;
    fn wyrm_msgs__msg__Frame__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Frame>, size: usize) -> bool;
    fn wyrm_msgs__msg__Frame__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Frame>);
    fn wyrm_msgs__msg__Frame__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Frame>, out_seq: *mut rosidl_runtime_rs::Sequence<Frame>) -> bool;
}

// Corresponds to wyrm_msgs__msg__Frame
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Frame {

    // This member is not documented.
    #[allow(missing_docs)]
    pub frame_id: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub precision_timestamp_secs: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub precision_timestamp_fractional_secs: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_recording: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub model_list_changed: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub body_count: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub bodies: rosidl_runtime_rs::Sequence<super::super::msg::rmw::RigidBody>,

}



impl Default for Frame {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !wyrm_msgs__msg__Frame__init(&mut msg as *mut _) {
        panic!("Call to wyrm_msgs__msg__Frame__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Frame {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { wyrm_msgs__msg__Frame__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { wyrm_msgs__msg__Frame__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { wyrm_msgs__msg__Frame__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Frame {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Frame where Self: Sized {
  const TYPE_NAME: &'static str = "wyrm_msgs/msg/Frame";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__wyrm_msgs__msg__Frame() }
  }
}


