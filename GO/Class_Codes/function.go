package main

import "fmt"

func main() {
	var a, b int

	fmt.Scanln(&a, &b)

	c := sum(a, b)

	fmt.Println("c is = ", c)
}

func sum(a, b int) int {
	return a+b
}