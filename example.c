#include <stdio.h>

/* define an handler pointer */
typedef int (*Handler_ptr)(int);

/*! \brief functions to handle differetn state 
 *  \param x    - option parameter, it can be void as well
 *  \return     - usually return the next state
 */
int handle_event_0_state_0(int x);
int handle_event_1_state_0(int x);
int handle_event_2_state_0(int x);
int handle_event_3_state_0(int x);
int handle_event_0_state_1(int x);
int handle_event_1_state_1(int x);
int handle_event_2_state_1(int x);
int handle_event_3_state_1(int x);

int main(int argc, char **argv){
    printf("FSM with function pointer template!\r\n");

    Handler_ptr table[4][4] = {
        {handle_event_0_state_0, handle_event_1_state_0, handle_event_2_state_0, handle_event_3_state_0},
        {handle_event_0_state_1, handle_event_1_state_1, handle_event_2_state_1, handle_event_3_state_1}
    };

    int event = 0;
    int state = 1;

    for(;;){
        state = (table[event][state])(42);    /* the 42 is arbitary */

        /*! to-do: event = wait_for_next_event();
         */

    }

}

int handle_event_0_state_0(int x){
    /* do stuff */
    return 1;
}
int handle_event_1_state_0(int x){
    /* do stuff */
    return 2;
}
int handle_event_2_state_0(int x){
    /* do stuff */
    return 3;
}
int handle_event_3_state_0(int x){
    /* do stuff */
    return 0;
}

int handle_event_0_state_1(int x){
    /* do stuff */
    return 1;
}
int handle_event_1_state_1(int x){
    /* do stuff */
    return 2;
}
int handle_event_2_state_1(int x){
    /* do stuff */
    return 3;
}
int handle_event_3_state_1(int x){
    /* do stuff */
    return 0;
}
