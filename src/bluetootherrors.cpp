// Copyright (c) 2014-2018 LG Electronics, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// SPDX-License-Identifier: Apache-2.0


#include <string>
#include <map>

#include "bluetootherrors.h"

static std::map<BluetoothError, std::string> bluetoothSILErrorText =
{
	{BLUETOOTH_ERROR_NONE, "No error"},
	{BLUETOOTH_ERROR_FAIL, "The operation failed for an unspecified or generic reason"},
	{BLUETOOTH_ERROR_NOT_READY, "The device is not ready to perform the requested operation"},
	{BLUETOOTH_ERROR_NOMEM, "The SIL failed to allocated memory"},
	{BLUETOOTH_ERROR_BUSY, "The operation can not be performed at this time"},
	{BLUETOOTH_ERROR_UNSUPPORTED, "The requested operation is not supported by the stack or device"},
	{BLUETOOTH_ERROR_PARAM_INVALID, "An invalid value was passed for one of the parameters"},
	{BLUETOOTH_ERROR_UNHANDLED, "An unhandled error was encountered"},
	{BLUETOOTH_ERROR_UNKNOWN_DEVICE_ADDR, "Unknown device address"},
	{BLUETOOTH_ERROR_AUTHENTICATION_CANCELED, "Authentication with a remote device was canceled"},
	{BLUETOOTH_ERROR_AUTHENTICATION_FAILED, "Authentication with a remote device failed"},
	{BLUETOOTH_ERROR_AUTHENTICATION_REJECTED, "Authentication with a remote was rejected"},
	{BLUETOOTH_ERROR_AUTHENTICATION_TIMEOUT, "Authentication with a remote device timed out"},
	{BLUETOOTH_ERROR_DEVICE_ALREADY_PAIRED, "Device is already paired"},
	{BLUETOOTH_ERROR_DEVICE_NOT_PAIRED, "Device is not paired"},
	{BLUETOOTH_ERROR_DEVICE_ALREADY_CONNECTED, "Device is already connected"},
	{BLUETOOTH_ERROR_DEVICE_NOT_CONNECTED, "Device is not connected"},
	{BLUETOOTH_ERROR_NOT_ALLOWED, "Performed operation is not allowed"},
	{BLUETOOTH_ERROR_ABORTED, "Operation was aborted"},
	{BLUETOOTH_ERROR_TETHERING_ALREADY_ENABLED, "Tethering is already enabled"},
	{BLUETOOTH_ERROR_TETHERING_ALREADY_DISABLED, "Tethering is already disabled"}
};

static std::map<BluetoothErrorCode, std::string> bluetoothErrorTextTable =
{
	{BT_ERR_ADAPTER_NOT_AVAILABLE, "Bluetooth adapter is not available"},
	{BT_ERR_MSG_PARSE_FAIL, "Failed to parse incoming message"},
	{BT_ERR_MTHD_NOT_SUBSCRIBED, "Method needs to be subscribed"},
	{BT_ERR_ALLOW_ONE_SUBSCRIBE, "Only one subscription allowed"},
	{BT_ERR_ADDR_PARAM_MISSING, "Required 'address' parameter is not supplied"},
	{BT_ERR_DEVICE_NOT_AVAIL, "Device with supplied address is not available"},
	{BT_ERR_PAIRING_CANCELED, "Pairing canceled by user"},
	{BT_ERR_NO_PAIRING, "There is no pairing in progress"},
	{BT_ERR_NO_PAIRING_FOR_REQUESTED_ADDRESS, "There is no pairing in progress for requested address"},
	{BT_ERR_DISCOVERY_TO_NEG_VALUE, "Invalid negative value for discoveryTimeout: "},
	{BT_ERR_DISCOVERABLE_TO_NEG_VALUE, "Invalid negative value for discoverableTimeout: "},
	{BT_ERR_PAIRABLE_TO_NEG_VALUE, "Invalid negative value for pairableTimeout: "},
	{BT_ERR_POWER_STATE_CHANGE_FAIL, "Failed to change bluetooth power status"},
	{BT_ERR_ADAPTER_PROPERTY_FAIL, "Failed to set adapter properties"},
	{BT_ERR_START_DISC_ADAPTER_OFF_ERR, "Can't start discovery when adapter is turned off"},
	{BT_ERR_START_DISC_FAIL, "Failed to start discovery"},
	{BT_ERR_DISC_STOP_ADAPTER_OFF_ERR, "Can't stop discovery when adapter is turned off"},
	{BT_ERR_STOP_DISC_FAIL, "Failed to stop discovery"},
	{BT_ERR_PAIRING_IN_PROG, "Pairing already in progress"},
	{BT_ERR_PASSKEY_PARAM_MISSING, "Required 'passkey' parameter not supplied"},
	{BT_ERR_PIN_PARAM_MISSING, "Required 'pin' parameter not supplied"},
	{BT_ERR_ACCEPT_PARAM_MISSING, "Required 'accept' parameter not supplied"},
	{BT_ERR_UNPAIR_FAIL, "Failed to unpair"},
	{BT_ERR_PAIRABLE_FAIL, "Failed to make device pairable"},
	{BT_ERR_PAIRING_CANCEL_TO, "Pairing canceled or timed out"},
	{BT_ERR_INCOMING_PAIR_DEV_UNAVAIL, "Device for incoming pairing request is not available!?"},
	{BT_ERR_PAIRABLE_TO, "Pairable Timeout reached"},
	{BT_ERR_PROFILE_UNAVAIL, "Profile backend is not available"},
	{BT_ERR_DEV_CONNECTING, "Device is already connecting"},
	{BT_ERR_DEV_NOT_PAIRED, "Device is not paired"},
	{BT_ERR_PROFILE_CONNECT_FAIL, "Failed to connect with remote device"},
	{BT_ERR_PROFILE_CONNECTED, "Already connected"},
	{BT_ERR_PROFILE_DISCONNECT_FAIL, "Failed to disconnect from remote device"},
	{BT_ERR_PROFILE_STATE_ERR, "Failed to retrieve state for remote device"},
	{BT_ERR_DIRPATH_PARAM_MISSING, "Required parameter 'directoryPath' is not supplied"},
	{BT_ERR_LIST_FOLDER_FAIL, "Failed to list folder on remote device"},
	{BT_ERR_PROFILE_NOT_CONNECTED, "Device is not connected to profile"},
	{BT_ERR_SRCFILE_PARAM_MISSING, "Required parameter 'sourceFile' is not supplied"},
	{BT_ERR_DESTFILE_PARAM_MISSING, "Required parameter 'destinationFile' is not supplied"},
	{BT_ERR_DESTPATH_INVALID, "Supplied destination path <destinationFile> does not exist or is invalid"},
	{BT_ERR_FTP_PUSH_PULL_FAIL, "Failed to push/pull file to/from remote device"},
	{BT_ERR_FTP_TRANSFER_CANCELED, "Transfer was canceled"},
	{BT_ERR_SRCFILE_INVALID, "Supplied file <sourceFile> does not exist or is invalid"},
	{BT_ERR_BAD_JSON, "Invalid JSON input"},
	{BT_ERR_SCHEMA_VALIDATION_FAIL, "The JSON input does not match the expected schema"},
	{BT_ERR_INVALID_DIRPATH, "Invalid directory path, must be an absolute path"},
	{BT_ERR_INVALID_SRCFILE_PATH, "Invalid source file path, must be an absolute path"},
	{BT_ERR_INVALID_DESTFILE_PATH, "Invalid destination file path, must be an absolute path"},
	{BT_ERR_NO_PROP_CHANGE, "No property state has changed"},
	{BT_ERR_DEVICE_PROPERTY_FAIL, "Failed to set device properties"},
	{BT_ERR_OPP_CONNECT_FAIL, "Failed to connect with remote device"},
	{BT_ERR_OPP_CONNECTED, "Already connected"},
	{BT_ERR_OPP_TRANSFER_CANCELED, "Transfer was canceled"},
	{BT_ERR_OPP_PUSH_PULL_FAIL, "Failed to push/pull file to/from remote device"},
	{BT_ERR_OPP_NOT_CONNECTED, "Device is not connected"},
	{BT_ERR_OPP_TRANSFER_NOT_ALLOWED, "Transfers are currently not allowed"},
	{BT_ERR_OPP_REQUESTID_PARAM_MISSING, "Required 'requestId' parameter is not supplied"},
	{BT_ERR_OPP_STATE_ERR, "Failed to retrieve state for remote device"},
	{BT_ERR_OPP_REQUESTID_NOT_EXIST, "The requestId does not exist"},
	{BT_ERR_OPP_ALREADY_ACCEPT_FILE, "These pushRequest already received the file"},
	{BT_ERR_OPP_TRANSFERID_NOT_EXIST, "The transferId does not exist"},
	{BT_ERR_ADAPTER_TURNED_OFF, "Adapter is turned off"},
	{BT_ERR_INVALID_ADAPTER_ADDRESS, "Adapter address is not valid"},
	{BT_ERR_GATT_SERVICE_NAME_PARAM_MISSING, "Required 'service' uuid parameter is not supplied"},
	{BT_ERR_GATT_CHARACTERISTIC_PARAM_MISSING, "Required 'characteristic' uuid parameter is not supplied"},
	{BT_ERR_GATT_CHARACTERISTC_VALUE_PARAM_MISSING, "Required characteristic 'value' parameter is not supplied"},
	{BT_ERR_GATT_CHARACTERISTICS_PARAM_MISSING, "Required 'characteristics' parameter is not supplied"},
	{BT_ERR_GATT_DESCRIPTOR_INFO_PARAM_MISSING, "Required 'descriptorInfo' parameter is not supplied"},
	{BT_ERR_GATT_DESCRIPTORS_PARAM_MISSING, "Required 'descriptors' parameter is not supplied"},
	{BT_ERR_GATT_SERVICE_DISCOVERY_FAIL, "GATT service discovery failed"},
	{BT_ERR_GATT_DISCOVERY_INVALID_PARAM, "GATT service discovery cannot be started, one of adapterAddress or address should be supplied"},
	{BT_ERR_GATT_ADD_SERVICE_FAIL, "GATT add service failed"},
	{BT_ERR_GATT_REMOVE_SERVICE_FAIL, "GATT remove service failed"},
	{BT_ERR_GATT_WRITE_CHARACTERISTIC_FAIL, "GATT write characteristic failed"},
	{BT_ERR_GATT_INVALID_CHARACTERISTIC, "Invalid GATT characteristic for the given service: "},
	{BT_ERR_GATT_READ_CHARACTERISTIC_FAIL, "GATT read characteristic failed"},
	{BT_ERR_GATT_CHARACTERISTC_INVALID_VALUE_PARAM, "Invalid value input for GATT characteristic"},
	{BT_ERR_GATT_MONITOR_CHARACTERISTIC_FAIL, "GATT monitor characteristic failed for characteristic: "},
	{BT_ERR_GATT_INVALID_SERVICE, "Invalid GATT service"},
	{BT_ERR_GATT_INVALID_DESCRIPTOR, "Invalid GATT descriptor"},
	{BT_ERR_GATT_READ_DESCRIPTORS_FAIL, "Failed to read descriptors"},
	{BT_ERR_GATT_DESCRIPTOR_PARAM_MISSING, "Missing descriptor parameter"},
	{BT_ERR_GATT_DESCRIPTOR_VALUE_PARAM_MISSING, "Missing value parameter for descriptor"},
	{BT_ERR_GATT_DESCRIPTOR_INVALID_VALUE_PARAM, "Invalid value input for GATT descriptor"},
	{BT_ERR_GATT_WRITE_DESCRIPTOR_FAIL, "Failed to write GATT descriptor"},
	{BT_ERR_A2DP_START_STREAMING_FAILED, "A2DP start streaming failed"},
	{BT_ERR_A2DP_STOP_STREAMING_FAILED, "A2DP stop streaming failed"},
	{BT_ERR_A2DP_DEVICE_ADDRESS_PARAM_MISSING, "Required 'address' parameter is not supplied"},
	{BT_ERR_PBAP_REQUESTID_PARAM_MISSING, "Required 'requestId' parameter is not supplied"},
	{BT_ERR_PBAP_ACCESS_NOT_ALLOWED, "Access request is currently not allowed"},
	{BT_ERR_PBAP_REQUESTID_NOT_EXIST, "The supplied requestId does not exist"},
	{BT_ERR_PBAP_ACCESS_REQUEST_NOT_EXIST, "The supplied accessRequestId does not exist"},
	{BT_ERR_PBAP_STATE_ERR, "Failed to retrieve state for remote device"},
	{BT_ERR_AVRCP_REQUESTID_PARAM_MISSING, "Required 'requestId' parameter is not supplied"},
	{BT_ERR_AVRCP_REQUEST_NOT_ALLOWED, "Request is currently not allowed"},
	{BT_ERR_AVRCP_REQUESTID_NOT_EXIST, "The supplied requestId does not exist"},
	{BT_ERR_AVRCP_STATE_ERR, "Failed to retrieve state for remote device"},
	{BT_ERR_HFP_OPEN_SCO_FAILED, "Failed to open SCO channel"},
	{BT_ERR_HFP_CLOSE_SCO_FAILED, "Failed to close SCO channel"},
	{BT_ERR_HFP_RESULT_CODE_PARAM_MISSING, "Required 'resultCode' parameter is not supplied"},
	{BT_ERR_HFP_WRITE_RESULT_CODE_FAILED, "Failed to write result code"},
	{BT_ERR_HFP_WRITE_RING_RESULT_CODE_FAILED, "Failed to write RING result code"},
	{BT_ERR_SPP_UUID_PARAM_MISSING, "Required 'uuid' parameter is not supplied"},
	{BT_ERR_SPP_CHANNELID_PARAM_MISSING, "Required 'channelId' parameter is not supplied"},
	{BT_ERR_SPP_NAME_PARAM_MISSING, "Required 'name' parameter is not supplied"},
	{BT_ERR_SPP_DATA_PARAM_MISSING, "Required 'data' parameter is not supplied"},
	{BT_ERR_SPP_SIZE_PARAM_MISSING, "Required 'size' parameter is not supplied"},
	{BT_ERR_SPP_WRITE_DATA_FAILED, "Failed to write data"},
	{BT_ERR_SPP_CHANNELID_NOT_AVAILABLE, "The supplied 'channelId' is not available"},
	{BT_ERR_SPP_SIZE_NOT_AVAILABLE, "The supplied 'size' is not available"},
	{BT_ERR_SPP_TIMEOUT_NOT_AVAILABLE, "The supplied 'timeout' is not available"},
	{BT_ERR_SPP_PERMISSION_DENIED, "Permission denied"},
	{BT_ERR_BLE_ADV_CONFIG_FAIL, "Failed to configure advertisement"},
	{BT_ERR_BLE_ADV_CONFIG_DATA_PARAM_MISSING,"Services and manufacturer data are missing, one should be supplied."},
	{BT_ERR_BLE_ADV_CONFIG_EXCESS_DATA_PARAM, "Cannot have both services and manufacturer data, only one should be supplied."},
	{BT_ERR_BLE_ADV_ALREADY_ADVERTISING, "Already advertising, failed to reconfigure."},
	{BT_ERR_BLE_ADV_SERVICE_DATA_FAIL, "Cannot have more than one service with data."},
	{BT_ERR_BLE_ADV_UUID_FAIL, "Cannot configure data without UUID."},
	{BT_ERR_BLE_ADV_NO_MORE_ADVERTISER, "Failed to start advertising because no advertising instance is available."},
	{BT_ERR_BLE_ADV_EXCEED_SIZE_LIMIT, "Advertise size cannot be more than 31 bytes."},
	{BT_ERR_SPP_APPID_PARAM_MISSING, "Application id is not supplied"},
	{BT_ERR_HFP_ALLOW_ONE_SUBSCRIBE_PER_DEVICE, "Only one subscription per device allowed"},
	{BT_ERR_PAN_SET_TETHERING_FAILED, "Failed to set bluetooth tethering"},
	{BT_ERR_PAN_TETHERING_PARAM_MISSING, "Required 'tethering' parameter is not supplied"},
	{BT_ERR_SPP_CREATE_CHANNEL_FAILED, "Failed to create SPP channel"},
	{BT_ERR_HFP_ATCMD_MISSING, "Required 'command' parameter is not supplied"},
	{BT_ERR_HFP_TYPE_MISSING, "Required 'type' parameter is not supplied"},
	{BT_ERR_HFP_SEND_AT_FAIL, "Failed to send AT command"},
	{BT_ERR_ANCS_NOTIFICATIONID_PARAM_MISSING, "Required 'notificationId' parameter is not supplied"},
	{BT_ERR_ANCS_ACTIONID_PARAM_MISSING, "Required 'actionId' parameter is not supplied"},
	{BT_ERR_ANCS_NOTIF_ACTION_NOT_ALLOWED, "Notification action not allowed on remote device"},
	{BT_ERR_ANCS_NOTIFICATION_ACTION_FAIL, "Requested action could not be performed on notification"},
	{BT_ERR_ANCS_ATTRIBUTELIST_PARAM_MISSING, "Required 'attributes' parameter is not supplied"},
	{BT_ERR_ANCS_ATTRIBUTE_PARAM_INVAL, "Attribute id is invalid"},
	{BT_ERR_ALLOW_ONE_ANCS_QUERY, "Another ANCS Notification query in progress"},
	{BT_ERR_HID_DATA_PARAM_MISSING, "data is not supplied"},
	{BT_ERR_HID_DATA_PARAM_INVALID, "data is invalid"},
	{BT_ERR_AVRCP_DEVICE_ADDRESS_PARAM_MISSING, "Required 'address' parameter is not supplied"},
	{BT_ERR_AVRCP_KEY_CODE_PARAM_MISSING, "Required 'keyCode' parameter is not supplied"},
	{BT_ERR_AVRCP_KEY_STATUS_PARAM_MISSING, "Required 'keyStatus' parameter is not supplied"},
	{BT_ERR_AVRCP_KEY_CODE_INVALID_VALUE_PARAM, "Invalid value input for AVRCP PASS THROUGH key code"},
	{BT_ERR_AVRCP_KEY_STATUS_INVALID_VALUE_PARAM, "Invalid value input for AVRCP PASS THROUGH key status"},
	{BT_ERR_AVRCP_SEND_PASS_THROUGH_COMMAND_FAILED, "AVRCP send PASS THROUGH command failed"},
	{BT_ERR_AVRCP_EQUALIZER_INVALID_VALUE_PARAM, "Invalid value input for AVRCP equalizer"},
	{BT_ERR_AVRCP_REPEAT_INVALID_VALUE_PARAM, "Invalid value input for AVRCP repeat"},
	{BT_ERR_AVRCP_SHUFFLE_INVALID_VALUE_PARAM, "Invalid value input for AVRCP shuffle"},
	{BT_ERR_AVRCP_SCAN_INVALID_VALUE_PARAM, "Invalid value input for AVRCP scan"},
	{BT_ERR_A2DP_GET_SOCKET_PATH_FAILED, "Failed to get Socket Path"},
	{BT_ERR_PROFILE_ENABLED, "Profile already enabled"},
	{BT_ERR_PROFILE_NOT_ENABLED, "Profile not enabled"},
	{BT_ERR_PROFILE_ENABLE_FAIL, "Failed to enable profile"},
	{BT_ERR_PROFILE_DISABLE_FAIL, "Failed to disable profile "},
	{BT_ERR_AVRCP_VOLUME_PARAM_MISSING, "Required 'volume' parameter is not supplied"},
	{BT_ERR_AVRCP_VOLUME_INVALID_VALUE_PARAM, "Invalid value input for AVRCP absolute volume"},
	{BT_ERR_AVRCP_SET_ABSOLUTE_VOLUME_FAILED, "Failed to set absolute volume"},
	{BT_ERR_WOBLE_SET_WOBLE_PARAM_MISSING, "Required 'woBleEnabled' parameter is not supplied"},
	{BT_ERR_WOBLE_SET_WOBLE_TRIGGER_DEVICES_PARAM_MISSING, "Required 'triggerDevices' parameter is not supplied"},
	{BT_ERR_A2DP_SBC_ENCODER_BITPOOL_MISSING, "Required 'bitpool' parameter is not supplied"},
	{BT_ERR_HID_DEVICE_ADDRESS_PARAM_MISSING, "Required 'address' parameter is not supplied"},
	{BT_ERR_HID_REPORT_ID_PARAM_MISSING, "Required 'reportId' parameter is not supplied"},
	{BT_ERR_HID_REPORT_TYPE_PARAM_MISSING, "Required 'reportType' parameter is not supplied"},
	{BT_ERR_HID_REPORT_TYPE_INVALID_VALUE_PARAM, "Invalid value input for HID report type"},
	{BT_ERR_HID_REPORT_DATA_PARAM_MISSING, "Required 'reportData' parameter is not supplied"},
	{BT_ERR_STACK_TRACE_STATE_CHANGE_FAIL, "Failed to change stack trace state"},
	{BT_ERR_SNOOP_TRACE_STATE_CHANGE_FAIL, "Failed to change snoop trace status"},
	{BT_ERR_STACK_TRACE_LEVEL_CHANGE_FAIL, "Failed to change stack trace level"},
	{BT_ERR_TRACE_OVERWRITE_CHANGE_FAIL, "Failed to change trace overwrite"},
	{BT_ERR_STACK_LOG_PATH_CHANGE_FAIL, "Failed to change stack log path"},
	{BT_ERR_SNOOP_LOG_PATH_CHANGE_FAIL, "Failed to change snoop log path"},
	{BT_ERR_GATT_CHARACTERISTC_WRITE_TYPE_PARAM_MISSING, "Required 'writeType' parameter is not supplied"},
	{BT_ERR_KEEP_ALIVE_INTERVAL_CHANGE_FAIL, "Failed to change interval of keep alive"},
	{BT_ERR_GATT_HANDLES_PARAM_MISSING, "Required 'handles' parameter is not supplied"},
	{BT_ERR_GATT_HANDLE_PARAM_MISSING, "Required 'handle' parameter is not supplied"},
	{BT_ERR_APPID_PARAM_MISSING, "One of 'serverId' or 'clientId' should be supplied"},
	{BT_ERR_CONNID_PARAM_MISSING, "Required 'connectId' parameter is not supplied"},
	{BT_ERR_MESSAGE_OWNER_MISSING, "Required message owner is not supplied"},
	{BT_ERR_GATT_SERVER_NAME_PARAM_MISSING, "Required 'server' uuid parameter is not supplied"},
	{BT_ERR_GATT_SERVERID_PARAM_MISSING, "Required 'serverId' parameter is not supplied"},
	{BT_ERR_GATT_REMOVE_SERVER_FAIL, "GATT remove server failed"},
	{BT_ERR_GATT_ADVERTISERID_PARAM_MISSING, "Required 'advertiserId' parameter is not supplied"},
	{BT_ERR_GATT_READ_DESCRIPTOR_FAIL, "Failed to read descriptor"},
	{BT_ERR_GATT_INSTANCE_ID_NOT_SUPPORTED, "'instanceId' is not supported"},
	{BT_ERR_CLIENTID_PARAM_MISSING, "Required 'clientId' parameter is not supplied"},
};

void appendErrorResponse(pbnjson::JValue &obj, BluetoothError errorCode)
{
	std::string errorText = "Unknown Error";

	if (bluetoothSILErrorText.find(errorCode) !=  bluetoothSILErrorText.end())
	{
		errorText = bluetoothSILErrorText[errorCode];
	}

	obj.put("returnValue", false);
	obj.put("errorCode", static_cast<int>(errorCode));
	obj.put("errorText", errorText);
}

const std::string retrieveErrorText(BluetoothErrorCode errorCode)
{
	return bluetoothErrorTextTable[errorCode];
}

const std::string retrieveErrorCodeText(BluetoothError errorCode)
{
	return bluetoothSILErrorText[errorCode];
}
