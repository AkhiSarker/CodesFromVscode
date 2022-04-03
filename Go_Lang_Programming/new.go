package main

import "fmt"

func main() {
	fmt.Println("hello ")

	var x int
	x = 5
	y := 20

	sum := x + y
	sud := x - y
	m := x * y
	d := x / y

	fmt.Println("DATA : ", x, y)

	fmt.Println("Sum : ", sum)
	fmt.Println("SUB : ", sud)
	fmt.Println("M : ", m)
	fmt.Println("D : ", d)

	/*

	 */

	if x%3 == 0 {
		fmt.Println("Div")
	} else {
		fmt.Println("Not Div")
	}

	var a float64 = 10.5
	var b int = 10
	var c float64 = a + float64(b)
	var g int = int(a) + b

	fmt.Println(c)
	fmt.Println(g)

}
