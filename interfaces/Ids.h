/*
 * If not stated otherwise in this file or this component's LICENSE file the
 * following copyright and licenses apply:
 *
 * Copyright 2020 Metrological
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

namespace WPEFramework {
namespace Exchange {

    enum IDS {
        ID_BROWSER = 0x00000040,
        ID_BROWSER_NOTIFICATION = 0x00000041,
        ID_POWER = 0x00000042,
        ID_PLAYGIGA = 0x00000043,
        ID_COMMAND = 0x00000044,
        ID_COMMAND_REGISTRATION = 0x00000045,
        ID_COMPOSITION = 0x00000046,
        ID_COMPOSITION_CLIENT = 0x00000047,
        ID_COMPOSITION_NOTIFICATION = 0x00000048,
        ID_DICTIONARY = 0x00000049,
        ID_DICTIONARY_NOTIFICATION = 0x0000004A,
        ID_DICTIONARY_ITERATOR = 0x0000004B,
        ID_EXTERNAL = 0x0000004C,
        ID_EXTERNAL_NOTIFICATION = 0x0000004D,
        ID_EXTERNAL_CATALOG = 0x0000004E,
        ID_EXTERNAL_CATALOG_NOTIFICATION = 0x0000004F,
        ID_KEYHANDLER = 0x00000050,
        ID_KEYPRODUCER = 0x00000051,
        ID_MEMORY = 0x00000052,
        ID_NETFLIX = 0x00000053,
        ID_NETFLIX_NOTIFICATION = 0x00000054,
        ID_CONTENTDECRYPTION = 0x00000055,
        ID_PROVISIONING = 0x00000056,
        ID_PROVISIONING_NOTIFICATION = 0x00000057,

        ID_SWITCHBOARD = 0x0000005A,
        ID_SWITCHBOARD_NOTIFICATION = 0x0000005B,
        ID_TIMESYNC = 0x0000005C,
        ID_TIMESYNC_NOTIFICATION = 0x0000005D,
        ID_IPNETWORK = 0x0000005E,
        ID_IPNETWORK_DNSSERVER = 0x0000005F,

        ID_GUIDE = 0x00000061,
        ID_GUIDE_NOTIFICATION = 0x00000062,
        ID_VOICEHANDLER = 0x00000063,
        ID_VOICEPRODUCER = 0x00000064,
        ID_WEBDRIVER = 0x00000065,
        ID_WEBSERVER = 0x00000066,
        ID_STREAMING = 0x00000067,
        ID_STREAMING_NOTIFICATION = 0x00000068,
        ID_CAPTURE = 0x00000069,
        ID_RPCLINK_NOTIFICATION = 0x0000006A,
        ID_RPCLINK = 0x0000006B,
        ID_AVNCLIENT = 0x0000006C,

        ID_POWER_NOTIFICATION = 0x0000006E,

        ID_BLUETOOTH = 0x00000070,
        ID_RTSPCLIENT = 0x00000071,

        ID_BROWSER_METADATA = 0x00000078,

        ID_BLUETOOTH_DEVICE = 0x0000007D,
        ID_BLUETOOTH_DEVICE_ITERATOR = 0x0000007E,
        ID_BLUETOOTH_NOTIFICATION = 0x0000007F,
        ID_BLUETOOTH_CALLBACK = 0x00000080,

        ID_SYSTEMCOMMAND = 0x00000082,

        ID_PACKAGER = 0x00000083,
        ID_PACKAGER_INSTALLATIONINFO = 0x00000084,
        ID_PACKAGER_PACKAGEINFO = 0x00000085,
        ID_PACKAGER_NOTIFICATION = 0x00000086,

        ID_SECURESHELLSERVER = 0x00000087,
        ID_SECURESHELLSERVER_CLIENT = 0x00000088,
        ID_SECURESHELLSERVER_CLIENT_ITERATOR = 0x00000089,

        ID_PACKAGER_PACKAGEINFOEX,
        ID_PACKAGER_PACKAGEINFOEX_ITERATOR,

        ID_TESTCONTROLLER,
        ID_TESTCONTROLLER_TEST,
        ID_TESTCONTROLLER_TEST_ITERATOR,
        ID_TESTCONTROLLER_CATEGORY,
        ID_TESTCONTROLLER_CATEGORY_ITERATOR,

        ID_TESTUTILITY,
        ID_TESTUTILITY_COMMAND,
        ID_TESTUTILITY_ITERATOR,

        ID_ROOMADMINISTRATOR,
        ID_ROOMADMINISTRATOR_NOTIFICATION,
        ID_ROOMADMINISTRATOR_ROOM,
        ID_ROOMADMINISTRATOR_ROOM_CALLBACK,
        ID_ROOMADMINISTRATOR_ROOM_MSGNOTIFICATION,

        ID_STREAM,
        ID_STREAM_CONTROL,
        ID_STREAM_CONTROL_GEOMETRY,
        ID_STREAM_CONTROL_CALLBACK,
        ID_STREAM_CALLBACK,
        ID_PLAYER,

        ID_DSGCC_CLIENT,
        ID_DSGCC_CLIENT_NOTIFICATION,

        ID_PERFORMANCE,

        ID_WEBPA,
        ID_WEBPA_CLIENT,

        ID_WHEELHANDLER,
        ID_WHEELPRODUCER,
        ID_POINTERHANDLER,
        ID_POINTERPRODUCER,
        ID_TOUCHHANDLER,
        ID_TOUCHPRODUCER,

        ID_STREAM_ELEMENT,
        ID_STREAM_ELEMENT_ITERATOR,

        ID_REMOTECONTROL,
        ID_REMOTECONTROL_NOTIFICATION,

        ID_RESOURCEMONITOR,

        ID_INPUT_PIN,
        ID_INPUT_PIN_NOTIFICATION,

        ID_MATH,

        ID_VOICEPRODUCER_PROFILE,

        ID_VOLUMECONTROL,
        ID_VOLUMECONTROL_NOTIFICATION,

        ID_DEVICE_PROPERTIES,
        ID_GRAPHICS_PROPERTIES,
        ID_CONNECTION_PROPERTIES,
        ID_DISPLAY_PROPERTIES,
        ID_COLORIMETRY_ITERATOR,
        ID_CONNECTION_PROPERTIES_NOTIFICATION,

        ID_HDR_PROPERTIES,
        ID_HDR_ITERATOR,

        ID_PLAYER_PROPERTIES,
        ID_PLAYER_PROPERTIES_AUDIO,
        ID_PLAYER_PROPERTIES_VIDEO,

        ID_REMOTEINVOCATION,

        ID_WEB_BROWSER,
        ID_BROWSER_RESOURCES,

        ID_AVSCLIENT,
        ID_AVSCONTROLLER,
        ID_AVSCONTROLLER_NOTIFICATION,

        ID_INPUT_SWITCH,

        ID_BLUETOOTH_SECURITYCALLBACK,
        ID_BLUETOOTH_CLASSIC,
        ID_BLUETOOTH_CLASSIC_SECURITYCALLBACK,
        ID_BLUETOOTH_LOWENERGY,

        ID_DOLBY_OUTPUT,
        ID_DOLBY_OUTPUT_NOTIFICATION,

        ID_WEBKITBROWSER_NOTIFICATION,

        ID_AMAZONPRIME,
        ID_AMAZONPRIME_NOTIFICATION,

        ID_CUSTOMER_CARE_OPERATIONS,

        ID_MEDIAPLAYER,
        ID_MEDIASTREAM,
        ID_MEDIASTREAM_NOTIFICATION,

        ID_APPLICATION,
        ID_APPLICATION_NOTIFICATION,
        ID_CONFIGURATION,

        ID_DEVICE_CAPABILITIES,
        ID_DEVICE_CAPABILITIES_AUDIO,
        ID_DEVICE_CAPABILITIES_VIDEO,
        ID_DEVICE_CAPABILITIES_RESOLUTION,
        ID_DEVICE_METADATA,

        ID_DIALSERVER,
        ID_DIALSERVER_APPLICATION,

        ID_LANGUAGETAG,
        ID_LANGUAGETAG_NOTIFICATION,
          
        ID_EXTERNAL_DERIVED,
        ID_BRIGHTNESS,
        ID_FOCUS,

        //OCDM
        ID_ACCESSOROCDM,
        ID_ACCESSOROCDM_NOTIFICATION,
        ID_SESSION,
        ID_SESSION_CALLBACK,
        ID_SESSION_EXTENSION,

        //Butler
        ID_BUTLER_GROUP,
        ID_BUTLER,
        ID_BUTLER_NOTIFICATION
    };
}
}
