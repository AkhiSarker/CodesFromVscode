package main

import "fmt"

func main() {
	var x rune
	var y rune
	var z rune
	var p string =  "Akhi"

	x = 97
	y = 'a'
	z = '\u0000'
	fmt.Printf("%c %c",x , y)
	fmt.Printf("%c", z)
	fmt.Printf("%s", p)
}