Este proyecto implementa un sistema en C++ para capturar y mostrar información de diferentes tipos de productos usando Programación Orientada a Objetos.
El programa utiliza una clase base llamada Producto y tres clases derivadas: Playera, ShortDeportivo y Accesorio.
La clase Producto es una clase abstracta que contiene el atributo color y define el método virtual puro mostrarInfo(), 
lo que obliga a que todas las clases hijas implementen su propia forma de mostrar información. También incluye getters y setters para manejar el color.
La clase Playera hereda de Producto y agrega atributos propios como talla y material. Implementa su propio método mostrarInfo() y proporciona getters y setters para manejar sus atributos.
La clase ShortDeportivo también hereda de Producto y contiene los atributos talla, si tiene bolsas y tipo de tela. Incluye métodos para modificar estos valores y su propia versión de mostrarInfo().
La clase Accesorio representa productos como gorras, pulseras o cualquier otro accesorio. Sus atributos adicionales son nombre y precio, e igualmente implementa su método mostrarInfo().
En la función main, el programa solicita al usuario los datos necesarios para crear una playera, un short deportivo y un accesorio. 
Después de capturar la información, se crean los objetos correspondientes y finalmente el programa muestra todos los datos ingresados utilizando el método mostrarInfo() de cada clase.
En resumen, este proyecto demuestra el uso de herencia, clases abstractas, polimorfismo y encapsulamiento en C++, aplicados al manejo de diferentes tipos de productos dentro de una tienda o inventario.
