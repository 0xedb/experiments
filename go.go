package main

import (
	"fmt"
	"sync"
)

func send(ch chan string, wg *sync.WaitGroup) {
	wg.Add(1)
	for {
		fmt.Println("sent")
		ch <- "sent"
	}
	defer wg.Done()
}

func receive(ch chan string, wg *sync.WaitGroup) {
	wg.Add(1)
	for {
		r := <-ch
		fmt.Println(r)
	}
	defer wg.Done()
}

func main() {
	var wg sync.WaitGroup
	channel := make(chan string)
	go send(channel, &wg)
	go receive(channel, &wg) 
	defer wg.Wait()
}
 