package main

import (
	"encoding/json"
	"fmt"
	"sync"
)

func wrt(wg sync.WaitGroup, ch chan int) {
	i := 0

	for {
		wg.Add(1)
		fmt.Println("sending ----> ", i)
		ch <- i
		i++
	}
	wg.Done()
}

func rcv(wg sync.WaitGroup, ch chan int) {

	for {
		wg.Add(1)
		rc := <-ch
		fmt.Println("receiveed ---> ", rc)
	}
	wg.Done()
}

type human struct {
	Name    string
	Age     uint16
	Friends []string
}

func main() {
	mine := human{
		Name: "bruno", 
		Age: 10, 
		Friends: []string{"one", "two", "three"},
	}
	data, err := json.Marshal(mine)
	if err != nil {
		fmt.Println("errr", err)
	}
	fmt.Printf("%s\n--", data)
}
