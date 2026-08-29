#pragma once
#include<iostream>
#include "../devices/audioOutputDevice.hpp"
#include "../devices/btSpeaker.hpp"
#include "../devices/wiredSpeaker.hpp"
#include "../devices/headphones.hpp"
#include "../enums/DeviceType.hpp"

using namespace std;

class DeviceFactory {
public:
    static IAudioOutputDevice* createDevice(DeviceType deviceType) {
        if (deviceType == DeviceType::BLUETOOTH) {
            return new BluetoothSpeakerAdapter(new BluetoothSpeakerAPI());
        } else if (deviceType == DeviceType::WIRED) {
            return new WiredSpeakerAdapter(new WiredSpeakerAPI());
        } else { // HEADPHONES
            return new HeadphonesAdapter(new HeadphonesAPI());
        }
    }
};