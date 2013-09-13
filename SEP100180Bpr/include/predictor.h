#ifndef PREDICTOR_H
#define PREDICTOR_H


class predictor ////class created for decision making of which words to be predicted
{
   public:
    void setTypd(string t){
        typdStr=t;
    }
    string getTypd(){
        return typdStr;
    }
    private:
        string typdStr;
};

#endif // PREDICTOR_H
