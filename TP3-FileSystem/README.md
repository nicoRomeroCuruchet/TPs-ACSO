# TP-3 File System Unix v6 

#### Antes de comenzar lean bien el enunciado e intenten comprender que hace cada una de las partes del TP.

- El proyecto se puede construir ejecutando el siguiente comando:
  
      make
- Este generará un ejecutable diskimageaccess que se puede probar de la siguiente manera:

      ./diskimageaccess ​<options>​ ​<diskimagePath>

- Se puede comparar su salida contra la de la cátedra:

      ./samples/diskimageaccess_soln ​<options>​ ​<diskimagePath>

- diskimagePath: debe ser la ruta a uno de los discos de prueba ubicados en:

       ./samples/testdisks. 

en el direcetorio **sample/testdisks**, hay tres discos de prueba: basicDiskImage, depthFileDiskImage y dirFnameSizeDiskImage.

- El ejecutable diskimageaccess reconoce validas solo dos opciones:

      i: prueba las capas de inode y archivo.
      p: prueba las capas de nombre de archivo y ruta.

- Por ejemplo, para ejecutar ambas pruebas de inode y nombre de archivo en el disco basicDiskImage, se puede ejecutar:

      ./diskimageaccess -ip ./samples/testdisks/basicDiskImage
  
La salida esperada de ejecutar *diskimageaccess* en cada imagen de disco X se almacena en el archivo **X.gold** dentro del directorio testdisks.
