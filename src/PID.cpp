#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
    this->Kp = Kp;
    this->Ki = Ki;
    this->Kd = Kd;
    p_error = i_error = d_error = 0.0;
    this->step = 0;
}

void PID::UpdateError(double cte) {
    this->step++;
    if (step == 1){
        p_error = cte;
        i_error = cte;
        d_error = 0.0;
    }
    else{
        d_error = cte - p_error;
        p_error = cte;
        i_error += cte;
    }
}

double PID::TotalError() {
    return (p_error * Kp) + (i_error * Ki) + (d_error * Kd);
}

