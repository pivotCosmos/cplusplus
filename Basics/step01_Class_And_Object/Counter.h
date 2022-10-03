/**
 * #ifndef & #define
 *   헤더파일 중복 방지(동일한 게 두 번 include 되지 않도록 함)
 *   COUNTER_H_INCLUDED가 정의돼 있지않으면
 *   COUNTER_H_INCLUDED를 정의해라
 * 
 * #pragma once
 *   ifndef, endif 대신 한번에 처리 가능
*/
#ifndef COUNTER_H_INCLUDED
#define COUNTER_H_INCLUDED

class Counter { // 클래스 Counter 선언 시작

    /**private 멤버 선언
     * Counter는 class이므로 가시성 지시어 디폴트는 private.
     * 단, Counter가 struct였다면 가시성 지시어 디폴트는 public.
     *  
    */
    int value=0;

    public:
        //public 멤버 선언
        void reset() {
            value = 0;
        }
        void count() {
            ++value;
        }
        int getValue() const { //const : getValue()할 때 데이터멤버 값이 변하지 않음.
            return value;
        }
};

#endif //COUNTER_H_INCLUDED //ifndef랑 짝꿍