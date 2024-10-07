idf_component_register(
    SRCS "main.cpp" "led_control.cpp"
    INCLUDE_DIRS "."
    REQUIRES ttn-esp32 driver)
