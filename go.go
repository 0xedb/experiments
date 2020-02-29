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

func runnable(wg *sync.WaitGroup) {
	wg.Add(1)
	a := 0
	for {
		fmt.Printf("%v::\n", a)
		if a == 20 {
			wg.Done()
			return
		}  
	}

}

func main() {
	var wg sync.WaitGroup  
	go runnable(&wg)
	wg.Wait()
}
