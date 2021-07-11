/*
  CStrikerCNC conexiones

  Realizado por Adrian Dario Diaz Lopez

*/
// Definicion de los pines de los pasos

#define STEP_PORT       GPIOA
#define X_STEP_PIN      3//3
#define Y_STEP_PIN      1//2
#define Z_STEP_PIN      2//4
#define X_STEP_BIT      (1<<X_STEP_PIN)
#define Y_STEP_BIT      (1<<Y_STEP_PIN)
#define Z_STEP_BIT      (1<<Z_STEP_PIN)
#if N_AXIS > 3
#define A_STEP_PIN      3
#define A_STEP_BIT      (1<<A_STEP_PIN)
#define STEP_MASK       (X_STEP_BIT|Y_STEP_BIT|Z_STEP_BIT|A_STEP_BIT)
#else
#define STEP_MASK       (X_STEP_BIT|Y_STEP_BIT|Z_STEP_BIT)
#endif
#define STEP_OUTMODE GPIO_MAP

// Definicion de la direccion de los motores
#define DIRECTION_PORT      GPIOA
#define X_DIRECTION_PIN     4
#define Y_DIRECTION_PIN     5
#define Z_DIRECTION_PIN     6
#define X_DIRECTION_BIT     (1<<X_DIRECTION_PIN)
#define Y_DIRECTION_BIT     (1<<Y_DIRECTION_PIN)
#define Z_DIRECTION_BIT     (1<<Z_DIRECTION_PIN)
#if N_AXIS > 3
#define A_DIRECTION_PIN     7
#define A_DIRECTION_BIT     (1<<A_DIRECTION_PIN)
#endif
#if N_AXIS > 4
#define B_DIRECTION_PIN     10
#define B_DIRECTION_BIT     (1<<B_DIRECTION_PIN)
#endif
#if N_AXIS == 5
#define DIRECTION_MASK      (X_DIRECTION_BIT|Y_DIRECTION_BIT|Z_DIRECTION_BIT|A_DIRECTION_BIT|B_DIRECTION_BIT)
#elif N_AXIS == 4
#define DIRECTION_MASK      (X_DIRECTION_BIT|Y_DIRECTION_BIT|Z_DIRECTION_BIT|A_DIRECTION_BIT)
#else
#define DIRECTION_MASK      (X_DIRECTION_BIT|Y_DIRECTION_BIT|Z_DIRECTION_BIT)
#endif
#define DIRECTION_OUTMODE   GPIO_MAP

// Habilitacion de los drivers, la conexion se realiza en comun de los 3 drivers de los ejes.
#define STEPPERS_DISABLE_PORT   GPIOB//GPIOB
#define STEPPERS_DISABLE_PIN    9//9
#define STEPPERS_DISABLE_BIT    (1<<STEPPERS_DISABLE_PIN)
#define STEPPERS_DISABLE_MASK   STEPPERS_DISABLE_BIT

// Definicion de los finales de carrera
#define LIMIT_PORT       GPIOB
#define X_LIMIT_PIN      12
#define Y_LIMIT_PIN      13
#define Z_LIMIT_PIN      14
#define X_LIMIT_BIT      (1<<X_LIMIT_PIN)
#define Y_LIMIT_BIT      (1<<Y_LIMIT_PIN)
#define Z_LIMIT_BIT      (1<<Z_LIMIT_PIN)
#define LIMIT_MASK       (X_LIMIT_BIT|Y_LIMIT_BIT|Z_LIMIT_BIT) // All limit bits
#define LIMIT_INMODE GPIO_SHIFT10

// Definicion de la habilitacion del Router y la direccion del mismo
#define SPINDLE_ENABLE_PORT         GPIOB
#define SPINDLE_ENABLE_PIN          1
#define SPINDLE_ENABLE_BIT          (1<<SPINDLE_ENABLE_PIN)
#define SPINDLE_DIRECTION_PORT      GPIOB
#define SPINDLE_DIRECTION_PIN       0
#define SPINDLE_DIRECTION_BIT       (1<<SPINDLE_DIRECTION_PIN)

// Definicion de la salida de PWM del Router
#define SPINDLE_PWM_PORT            GPIOA
#define SPINDLE_PWM_PIN             8
#define SPINDLE_PWM_BIT             (1<<SPINDLE_PWM_PIN)

// Defincion del coolant
#define COOLANT_FLOOD_PORT          GPIOB
#define COOLANT_FLOOD_PIN           3
#define COOLANT_FLOOD_BIT           (1<<COOLANT_FLOOD_PIN)
#define COOLANT_MIST_PORT           GPIOB
#define COOLANT_MIST_PIN            4
#define COOLANT_MIST_BIT            (1<<COOLANT_MIST_PIN)


// Definicion del sistema de control manual
#define CONTROL_PORT                GPIOB
#define CONTROL_RESET_PIN           5
#define CONTROL_FEED_HOLD_PIN       6
#define CONTROL_CYCLE_START_PIN     7
#define CONTROL_SAFETY_DOOR_PIN     8
#define CONTROL_RESET_BIT           (1<<CONTROL_RESET_PIN)
#define CONTROL_FEED_HOLD_BIT       (1<<CONTROL_FEED_HOLD_PIN)
#define CONTROL_CYCLE_START_BIT     (1<<CONTROL_CYCLE_START_PIN)
#define CONTROL_SAFETY_DOOR_BIT     (1<<CONTROL_SAFETY_DOOR_PIN)
#define CONTROL_MASK                (CONTROL_RESET_BIT|CONTROL_FEED_HOLD_BIT|CONTROL_CYCLE_START_BIT|CONTROL_SAFETY_DOOR_BIT)
#define CONTROL_INMODE GPIO_MAP

// Definicion de la sonda para el eje Z
#define PROBE_PORT                  GPIOA
#define PROBE_PIN                   7
#define PROBE_BIT                   (1<<PROBE_PIN)

