#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to wyrm_msgs__msg__Description

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub num_markers: i32,

}



impl Default for Description {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Description::default())
  }
}

impl rosidl_runtime_rs::Message for Description {
  type RmwMsg = super::msg::rmw::Description;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        id: msg.id,
        parent_id: msg.parent_id,
        name: msg.name.as_str().into(),
        num_markers: msg.num_markers,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      id: msg.id,
      parent_id: msg.parent_id,
        name: msg.name.as_str().into(),
      num_markers: msg.num_markers,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      id: msg.id,
      parent_id: msg.parent_id,
      name: msg.name.to_string(),
      num_markers: msg.num_markers,
    }
  }
}


// Corresponds to wyrm_msgs__msg__RigidBody

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RigidBody {

    // This member is not documented.
    #[allow(missing_docs)]
    pub id: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub position: geometry_msgs::msg::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub orientation: geometry_msgs::msg::Quaternion,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RigidBody::default())
  }
}

impl rosidl_runtime_rs::Message for RigidBody {
  type RmwMsg = super::msg::rmw::RigidBody;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        id: msg.id,
        name: msg.name.as_str().into(),
        position: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.position)).into_owned(),
        orientation: geometry_msgs::msg::Quaternion::into_rmw_message(std::borrow::Cow::Owned(msg.orientation)).into_owned(),
        mean_error: msg.mean_error,
        tracking_lost: msg.tracking_lost,
        model_filled: msg.model_filled,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      id: msg.id,
        name: msg.name.as_str().into(),
        position: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.position)).into_owned(),
        orientation: geometry_msgs::msg::Quaternion::into_rmw_message(std::borrow::Cow::Borrowed(&msg.orientation)).into_owned(),
      mean_error: msg.mean_error,
      tracking_lost: msg.tracking_lost,
      model_filled: msg.model_filled,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      id: msg.id,
      name: msg.name.to_string(),
      position: geometry_msgs::msg::Point::from_rmw_message(msg.position),
      orientation: geometry_msgs::msg::Quaternion::from_rmw_message(msg.orientation),
      mean_error: msg.mean_error,
      tracking_lost: msg.tracking_lost,
      model_filled: msg.model_filled,
    }
  }
}


// Corresponds to wyrm_msgs__msg__Frame

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub bodies: Vec<super::msg::RigidBody>,

}



impl Default for Frame {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Frame::default())
  }
}

impl rosidl_runtime_rs::Message for Frame {
  type RmwMsg = super::msg::rmw::Frame;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        frame_id: msg.frame_id,
        timestamp: msg.timestamp,
        precision_timestamp_secs: msg.precision_timestamp_secs,
        precision_timestamp_fractional_secs: msg.precision_timestamp_fractional_secs,
        is_recording: msg.is_recording,
        model_list_changed: msg.model_list_changed,
        body_count: msg.body_count,
        bodies: msg.bodies
          .into_iter()
          .map(|elem| super::msg::RigidBody::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      frame_id: msg.frame_id,
      timestamp: msg.timestamp,
      precision_timestamp_secs: msg.precision_timestamp_secs,
      precision_timestamp_fractional_secs: msg.precision_timestamp_fractional_secs,
      is_recording: msg.is_recording,
      model_list_changed: msg.model_list_changed,
      body_count: msg.body_count,
        bodies: msg.bodies
          .iter()
          .map(|elem| super::msg::RigidBody::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      frame_id: msg.frame_id,
      timestamp: msg.timestamp,
      precision_timestamp_secs: msg.precision_timestamp_secs,
      precision_timestamp_fractional_secs: msg.precision_timestamp_fractional_secs,
      is_recording: msg.is_recording,
      model_list_changed: msg.model_list_changed,
      body_count: msg.body_count,
      bodies: msg.bodies
          .into_iter()
          .map(super::msg::RigidBody::from_rmw_message)
          .collect(),
    }
  }
}


