// Unit 1 : Eundamental of object oriented Programming.

// Argiculture Sensor Monitoring 

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class SoilSensor{
    private:
    string sensorId;
    double moistureLevel;
    string timestamp;

    public:
    SoilSensor(string id, double moisture, string time) : sensorId(id), moistureLevel(moisture), timestamp(time){}

    void readSensor(double newMoisture, string newTime){
        moistureLevel = newMoisture;
        timestamp = newTime;
    }

    void DisplayData() const{
        cout << "Sensor : " << sensorId << "\n" << "Moisture : " << moistureLevel << "%" << "\n" << "Time : " << timestamp << "\n" << endl;   
    }
};

int main(){
    vector<SoilSensor> farmSensors;
    farmSensors.emplace_back("S001", 45.2, "08 : 00");
    farmSensors.emplace_back("S002", 52.2, "08 : 00");
    farmSensors.emplace_back("S003", 38.5, "08 : 00");

    cout << "=== Morning Sensor Reading ===" << "\n" <<endl;
    for(const auto& sensor : farmSensors){
        sensor.DisplayData();
    }

    farmSensors[0].readSensor(47.5, "09 : 00");
    cout << " \n === Updated Reading === " <<"\n" << endl;
    farmSensors[0].DisplayData();
}



