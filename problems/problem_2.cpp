float problemSolution2(float i, float j, float k) {
    float result;
    // write your code here;
    //if(i>=j && i>=k){
    //    result = i;
    //}else if(j>=k){
    //    result = j;
    //}else{
    //    result = k;
    //}
    result = (i >= j && i >=k? i: (j>=k? j: k));
    return result;
}