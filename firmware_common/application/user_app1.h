/**********************************************************************************************************************
File: user_app1.h                                                                

----------------------------------------------------------------------------------------------------------------------
To start a new task using this user_app1 as a template:
1. Follow the instructions at the top of user_app1.c
2. Use ctrl-h to find and replace all instances of "user_app1" with "yournewtaskname"
3. Use ctrl-h to find and replace all instances of "UserApp1" with "YourNewTaskName"
4. Use ctrl-h to find and replace all instances of "USER_APP1" with "YOUR_NEW_TASK_NAME"
5. Add #include yournewtaskname.h" to configuration.h
6. Add/update any special configurations required in configuration.h (e.g. peripheral assignment and setup values)
7. Delete this text (between the dashed lines)
----------------------------------------------------------------------------------------------------------------------

Description:
Header file for user_app1.c

**********************************************************************************************************************/

#ifndef __USER_APP1_H
#define __USER_APP1_H

/**********************************************************************************************************************
Type Definitions
**********************************************************************************************************************/


/**********************************************************************************************************************
Constants / Definitions
**********************************************************************************************************************/


/**********************************************************************************************************************
Function Declarations
**********************************************************************************************************************/
#define ANT_CHANNEL_USERAPP             ANT_CHANNEL_0         
#define ANT_CHANNEL_TYPE_USERAPP        CHANNEL_TYPE_SLAVE    
#define ANT_DEVICEID_LO_USERAPP         (u8)0x5b              
#define ANT_DEVICEID_HI_USERAPP         (u8)0x01        
#define ANT_DEVICE_TYPE_USERAPP         (u8)0        
#define ANT_TRANSMISSION_TYPE_USERAPP   (u8)0             
#define ANT_CHANNEL_PERIOD_LO_USERAPP   (u8)0x00       
#define ANT_CHANNEL_PERIOD_HI_USERAPP   (u8)0x20      
#define ANT_FREQUENCY_USERAPP           (u8)50           
#define ANT_TX_POWER_USERAPP            RADIO_TX_POWER_4DBM 

/*--------------------------------------------------------------------------------------------------------------------*/
/* Public functions                                                                                                   */
/*--------------------------------------------------------------------------------------------------------------------*/


/*--------------------------------------------------------------------------------------------------------------------*/
/* Protected functions                                                                                                */
/*--------------------------------------------------------------------------------------------------------------------*/
void UserApp1Initialize(void);
void UserApp1RunActiveState(void);


/*--------------------------------------------------------------------------------------------------------------------*/
/* Private functions                                                                                                  */
/*--------------------------------------------------------------------------------------------------------------------*/


/***********************************************************************************************************************
State Machine Declarations
***********************************************************************************************************************/
static void UserApp1SM_Idle(void);    

static void UserApp1SM_Error(void);         

static void UserAppSM_WaitChannelOpen(void);

static void UserAppSM_ChannelOpen(void);

static void UserAppSM_WaitChannelClose(void);

static void UserApp1SM_WaitChannelAssign(void);

#endif /* __USER_APP1_H */


/*--------------------------------------------------------------------------------------------------------------------*/
/* End of File                                                                                                        */
/*--------------------------------------------------------------------------------------------------------------------*/
