package main 

import "fmt"

func main() {
	type avid int
	type bvid = bool
	a := 010
	ab := 0xA
	abb := 0b110
	folder := `C:\n`
	f := "C:\n"
	var b avid = 3000;
	var c bvid = true
	fmt.Println("hey");
	fmt.Println(a, ab);
	fmt.Println(abb)
	fmt.Println(folder)
	fmt.Println(f)
	fmt.Println(b)
	fmt.Println(c)
}