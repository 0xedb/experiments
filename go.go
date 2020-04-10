package main 
import "fmt"
import "sync"
// import "time"

func wrt(wg *sync.WaitGroup, ch *chan int) {
	i := 0
	wg.Add(1)
	for {
		fmt.Println("sending ----> ", i)
		*ch <- i
		i++
	}
	wg.Done()
}

func rcv(wg *sync.WaitGroup, ch *chan int) {
	wg.Add(1)
	for {
		rc := <- *ch
		fmt.Println("receiveed ---> ", rc)
	}
	wg.Done()
}

func main() {
	var wg sync.WaitGroup
	ch := make(chan int)
	go wrt(&wg, &ch)
	go rcv(&wg, &ch)
	wg.Wait()
}