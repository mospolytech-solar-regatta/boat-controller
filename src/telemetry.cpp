//
// Created by schtu on 12.05.2022.
//

#include "../src/telemetry.h"

namespace Telemetry {


    class json_output {


        JsonOutput() {
            //CreatetAt =
            ControllerWatts = 0;
            TimeToGo = 0;
            ControllerVolts = 0;
            MPPTVolts = 0;
            MPPTWatts = 0;
            MotorTemp = 0;
            MotorRevols = 0;
            Speed = 0;
            PositionLat = 0;
            PositionLng = 0;
        }


        void ControllerWatts(long int Watts) {
            this->ControllerWatts = Watts;
        }


        void TimeToGo(int TimeToGo) {
            this->TimeToGo = TimeToGo;
        }


        void ControllerVolts(long int Volts) {
            this->ControllerVolts = Volts;
        }


        void MPPTVolts(long int Volts) {
            this->MPPTVolts = Volts;
        }


        void MPPTWatts(long int Watts) {
            this->MPPTWatts = Watts;
        }


        void MotorTemp(double Temperature) {
            this->MotorTemp = Temperature;
        }


        void MotorRevols(int Revols) {
            this->MotorRevols = Revols;
        }


        void Speed(double Speed) {
            this->Speed = Speed;
        }


        void PositionLat(double PositionLat) {
            this->PositionLat = PositionLat;
        }


        void PositionLng(double PositionLng) {
            this->PositionLng = PositionLng;
        }

        string Show() {
            string Out = "controller_watts=" + controller_watts + "&time_to_go=" + time_to_go + "&controller_volts=" +
                         controller_volts +
                         "&MPPT_volts=" + MPPT_volts + "&MPPT_watts=" + MPPT_watts + "&motor_temp=" + motor_temp +
                         "&motor_revols=" + motor_revols +
                         "&speed=" + speed + "&position_lat=" + position_lat + "&position_lng=" + position_lng;
            return Out;
        }

    }

    JsonOutput Data();


    void ControllerWatts(long int Watts){
        Data.ControllerWatts(Watts);
    }


    void TimeToGo(int TimeToGo){
        Data.TimeToGo(TimeToGo);
    }


    void ControllerVolts(long int Volts){
        Data.ControllerVolts(Volts);
    }


    void MPPTVolts(long int Volts){
        Data.MPPTVolts(Volts);
    }


    void MPPTWatts(long int Watts){
        Data.MPPTWatts(Watts);
    }


    void MotorTemp(double Temperature){
        Data.MotorTemp(Temperature);
    }


    void MotorRevols(int Revols){
        Data.MotorRevols(Revols);
    }


    void Speed(double Speed){
        Data.Speed(Speed);
    }


    void PositionLat(double PositionLat){
        Data.PositionLat(PositionLat);
    }


    void PositionLng(double PositionLng){
        Data.PositionLng(PositionLng);
    }


    string Show(){
        return Data.show();
    }


}