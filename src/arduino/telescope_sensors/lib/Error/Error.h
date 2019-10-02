#ifndef ERROR_H
#define ERROR_H

//Output

struct ErrorType{
    ErrorType(uint8_t id, String text): errNo(id), errorText(text){}
    uint8_t errNo;
    String errorText;
};


#define ERR_LINE_OVERFLOW ErrorType(100, "display overflow")

#endif //ERROR_H