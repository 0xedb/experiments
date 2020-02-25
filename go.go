package main

import (
	"fmt"
	"os/user"
)

// Node represents node of a linked structure
type Node struct {
	data int
	next *Node
}

func main() {
	fmt.Println("one")

	i := 20
	p := &i
	*p = 300

	fmt.Println(i)
	fmt.Println(*p)

	linkedList := Node{300, nil}
	fmt.Println(linkedList)

	me, _ := user.Current()
	fmt.Println(me.Username)

	v := map[string]int{"bruno": 30}
	fmt.Println(v["bruno"])

}

// Adder adds 2 numbers
func Adder(one, two int) int {
	return one + two
}

// AddSub adds and subtracts 2 numbers
// and returns the result of both operations
func AddSub(one, two int) (int, int) {
	return one + two, one - two
}
