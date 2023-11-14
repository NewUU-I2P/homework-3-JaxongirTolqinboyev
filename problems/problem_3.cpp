#include <string>

std::string problemSolution3(float height, char S) {
    // write your code here
    std::string Result;
    if (S == 'M'){
        if (height<1.70){
            Result = "Short";
        }else if (height>=1.70 && height<1.85 ){
            Result = "Normal";
        }else if (height>=1.85){
            Result = "Tall";
        }
    }else if (S == 'F'){
        if (height<1.60){
            Result = "Short";
        }else if (height>=1.60 && height<1.75){
            Result = "Normal";
        }else if (height>=1.75){
            Result = "Tall";
        }
    }
    return Result;

    // use return to return your result
    // make use of control flow statements
}