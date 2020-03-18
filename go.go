package main 

import "fmt"

type node struct {
	data int
	next *node
	info func() int
}

func five() int {
	return 5
}

func main() {
	 var ll = node{10, nil, five}
	 fmt.Println(ll.data)
	 fmt.Println(ll.info())
	 fmt.Println(ll.next)
}