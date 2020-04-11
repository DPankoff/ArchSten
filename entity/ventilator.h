#ifndef VENTILATOR_H
#define VENTILATOR_H


class ventilator
{
public:
    ventilator();

    void on();
    void off();

    enum state
    {
        s_off = 0,
        s_on  = 1,
        s_er  = 2
    };

    int curr_state;
};

#endif // VENTILATOR_H
