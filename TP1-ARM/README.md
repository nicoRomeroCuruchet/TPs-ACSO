# TP 1 de Arquitectura del Computador y Sistemas Operativos - UdeSA

En este laboratorio van a programar un simulador funcional de un subconjunto de instrucciones de la arquitectura ARMv8, basada en instrucciones de 32 bits de tamaño fijo. 
El presente proyecto tiene como objetivo principal ejercitar la comprensión práctica de diversos conceptos fundamentales en el ámbito de la  programación a nivel de hardware. Entre estos conceptos se incluyen los registros de propósito general, que son cruciales para el almacenamiento temporal de datos, la realización de operaciones aritméticas y lógicas. Asimismo, se aborda el estudio de la memoria, elemento esencial para el almacenamiento de instrucciones y datos.

El proyecto pretende ser un simulador de la arquitectura ARMv8, tiene que ser capaz de traer de memoria instrucciones, decodificarlas y ejecutarlas, alterando flags, memoria, y registros.

### Archivos

1. Subdirectorio **src/** 
      * shell: "shell.h", "shell.c" 
      * El esqueleto del simulador: "sim.c"
3. Subdirectorio **inputs/** 
   * Entradas de prueba para el simulador (código ensamblador ARM): "*.s"
   * Ensamblador de ARM/hexdump (código de assembly -> código de máquina -> hexdump): "asm2hex"

3. Simulador de referencia (ref_sim_XX)
     * Se puede verificar el valor de registros y de memoria para un determinado rango.
     * El codigo de su simulador se puede probar, tienen que ejecutar las entradas de prueba en su simulador y en el simulador de referencia (ref_sim).

4. **ref**
     * DDI0487B_a_armv8_arm.pdf es el manual de referencia detallado del conjunto de instrucciones ARMv8.

5. **aarch64-linux-android-4.9**
     * Cadena de herramientas del compilador de Google Android para traducir el código ensamblador en código de máquina.

**Instrucciones**

1. Modificar "sim.c" para implementar el conjunto de instrucciones ARM especificado en el TP del laboratorio. Ejecuta "make" para compilar el simulador.

          cd src/
          make

Ahora deberías tener un archivo ejecutable llamado "sim".

2. Usa "asm2hex" para convertir las entradas de prueba ("*.s") en hexdumps del código de máquina ensamblado ("*.x").

          cd inputs/
          ./asm2hex addis.s

Ahora deberías tener un hexdump del código de máquina ensamblado "addis.x". Repite este paso para el resto de las entradas de prueba.


3. Ejecuta el hexdump en el simulador.

          src/sim inputs/addis.x

>> ARM Simulator
>> 
>> Read 4 words from program into memory.
>> 
>> ARM-SIM> go
>> 
>> Simulating ...


En este momento, el simulador se muere porque aún no ha sido implementado. Presiona Control+C para salir del simulador.

4. Ejecuta el hexdump en el simulador de referencia (*ref_sim*), hay dos binarios depende de la arquitectura que tengan.

          ref_sim inputs/addis.x


Con '?' pueden mirar todos los comandos que permite el simualador, junto con una explicacion.

Si los resultados de su simulador coinciden con los del ref_sim  van bien ;). 
Buena suerte!

