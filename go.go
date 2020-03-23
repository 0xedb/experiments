package main

import "fmt"

func main() {
	slc := []int{}
	slc = append(slc, 20, 303)
	fmt.Println(slc, len(slc))
}