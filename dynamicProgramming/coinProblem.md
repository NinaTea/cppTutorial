# Coin Problem

La idea es poder respondernos:

Si tengo un conjunto de monedas {c1, c2, ..., cN} y quiero juntar X monedas. X es un entero tal que lo puedo formar exactamente con las monedas que tengo. ¿Cuántas monedas necesito?

Este es un clásico problema de programación dinámica y vamos a usar recursión para resolverlo. Siempre recomiendan primero encontrar la función recursiva que resuelve el problema y luego programarla. No necesariamente este paso es el más fácil.


**La idea de la programación dinámica es resolver el problema TOTAL como la suma de problemas mas chiquitos**. Acá por eso engancha re bien lo recursivo ;). La prog. dinam también es una versión más fancy de la fuerza bruta. Entonces, mezclemos estas dos ideas.

Tenemos una bolsa con las monedas {1, 3, 4}. Queremos saber cuál es la menor cantidad de monedas que necesitamos para formar 10. Qué hacemos?

Agarramos una moneda cualquiera, la restamos a nuestra suma que queremos formar y nos volvemos a preguntar (ahora con el problema más chico) lo mismo. Cuántas monedas necesitamos para formar `10 - la moneda que agarramos`? Y así sucesivamente. En cada pregunta, nos vamos a ir quedando con las que nos de la menor cantidad. Esto matemticamente se puede expresar como:

$$
f(\text{suma})=
\begin{cases}
 \infty  & \quad \text{suma} < 0 \\ 
0 & \quad \text{suma} == 0 \\
min_{c \in monedas} \{  f(\text{suma - c}) + 1 \} & \quad \text{suma} > 0 
\end{cases}
$$

Veamos una ejecución, sólo para uno de los posibles mejores casos
![alt text](/imgs/diagram-20250226.svg)
En cada iteración, vamos disminuyendo el valor de suma, que es el valor que queremos formar con la menor cantidad de monedas.
