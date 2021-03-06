/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_todos_los_leds_apagados(void);
extern void test_prender_un_led(void);
extern void test_apagar_un_led(void);
extern void test_prender_y_apagar_varios_leds(void);
extern void test_prender_todos_los_leds(void);
extern void test_apagar_todos_los_leds(void);
extern void test_consultar_led_apagado(void);
extern void test_consultar_led_encendido(void);
extern void test_valor_superior(void);
extern void test_valor_inferior(void);
extern void test_error_en_parametros(void);


/*=======Mock Management=====*/
static void CMock_Init(void)
{
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
  GlobalOrderError = NULL;
}
static void CMock_Verify(void)
{
}
static void CMock_Destroy(void)
{
}

/*=======Teardown (stub)=====*/
void tearDown(void) {}

/*=======Test Reset Options=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  CMock_Verify();
  CMock_Destroy();
  CMock_Init();
  setUp();
}
void verifyTest(void);
void verifyTest(void)
{
  CMock_Verify();
}

/*=======Test Runner Used To Run Each Test=====*/
static void run_test(UnityTestFunction func, const char* name, UNITY_LINE_TYPE line_num)
{
    Unity.CurrentTestName = name;
    Unity.CurrentTestLineNumber = line_num;
#ifdef UNITY_USE_COMMAND_LINE_ARGS
    if (!UnityTestMatches())
        return;
#endif
    Unity.NumberOfTests++;
    UNITY_CLR_DETAILS();
    UNITY_EXEC_TIME_START();
    CMock_Init();
    if (TEST_PROTECT())
    {
        setUp();
        func();
    }
    if (TEST_PROTECT())
    {
        tearDown();
        CMock_Verify();
    }
    CMock_Destroy();
    UNITY_EXEC_TIME_STOP();
    UnityConcludeTest();
}

/*=======MAIN=====*/
int main(void)
{
  UnityBegin("test_leds.c");
  run_test(test_todos_los_leds_apagados, "test_todos_los_leds_apagados", 47);
  run_test(test_prender_un_led, "test_prender_un_led", 54);
  run_test(test_apagar_un_led, "test_apagar_un_led", 60);
  run_test(test_prender_y_apagar_varios_leds, "test_prender_y_apagar_varios_leds", 67);
  run_test(test_prender_todos_los_leds, "test_prender_todos_los_leds", 76);
  run_test(test_apagar_todos_los_leds, "test_apagar_todos_los_leds", 84);
  run_test(test_consultar_led_apagado, "test_consultar_led_apagado", 93);
  run_test(test_consultar_led_encendido, "test_consultar_led_encendido", 101);
  run_test(test_valor_superior, "test_valor_superior", 110);
  run_test(test_valor_inferior, "test_valor_inferior", 118);
  run_test(test_error_en_parametros, "test_error_en_parametros", 128);

  return UnityEnd();
}
