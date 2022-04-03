package main

import "fmt"

func main() {
	//  Map 

	var m1 =  map[string] string{"un" : "akhi", "pwd" : "123456"}
	fmt.Println(m1)

	var m2  = map[int] int {0:0, 1:10, 2:20}
	fmt.Println(m2[0], m2[1], m2[2])

	var m3  = map[string] int {}
	m3["un"] = 1
	m3["paw"] = 123456
	fmt.Println(m3["un"], m3["pwd"])

	var m5  = map[string] int {"a":1,"b" : 2}
	fmt.Println(m5)
	fmt.Println(m5["d"]) 

}