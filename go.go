package main 

import "fmt"

type node struct {
	data int
	next *node 
}

type nody interface {
	info()
}

func (n node) nody() {
	fmt.Println(n.data)
	fmt.Println(n.next)
}

func main() {
	 var ll = node{10, nil}
	 ll.nody()
}