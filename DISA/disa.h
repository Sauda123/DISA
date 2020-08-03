
#ifndef DISA_H_
#define DISA_H_

#define PKT_RATE_0_1        (10 * CLOCK_SECOND)
#define PKT_RATE_0_2        (5 * CLOCK_SECOND)
#define PKT_RATE_0_3        (3.3 * CLOCK_SECOND)
#define PKT_RATE_0_4        (2.5 * CLOCK_SECOND)
#define PKT_RATE_0_5        (2 * CLOCK_SECOND)

#define MALICIOUS_NODE_1    6
#define MALICIOUS_NODE_2    11
#define MALICIOUS_NODE_3    20

/**********************************************/
/**********************************************/
/* Simulation Parameters */
#define DISAM_1             0
#define DISAM_2             1
#define DISA_START_ATTACK   1
#define DISA_ENABLE_DISAM   1
#define DISA_RATE_SELECTED  PKT_RATE_0_1
/**********************************************/
/**********************************************/
/**********************************************/

#if (DISA_RATE_SELECTED == PKT_RATE_0_1)
#define DISA_NUM_ATTACKS    100
#elif (DISA_RATE_SELECTED == PKT_RATE_0_2)
#define DISA_NUM_ATTACKS    200
#elif (DISA_RATE_SELECTED == PKT_RATE_0_3)
#define DISA_NUM_ATTACKS    300
#elif (DISA_RATE_SELECTED == PKT_RATE_0_4)
#define DISA_NUM_ATTACKS    400
#else
#define DISA_NUM_ATTACKS    500
#endif


typedef struct 
{
    uint8_t node_id;
    uint8_t dis_received;
    uint8_t dao_received;
    clock_time_t dis_time;
       
}DISA_NBR;

#define DISA_MAX_NBR       30

/* Must be in milliseconds */
#define DISA_INITIAL_WAIT  1*60*1000

#define DISA_MAL_THRESHOLD 3

#endif