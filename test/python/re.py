from rx.core import Observable, ConnectableObservable
from rx.subject import Subject
from rx import of, operators as op
import rx
import time
from random import randint


class  tt(object):
    def __init__(self, size, mat):
        self.size = size
        self.mat = mat

tts = [tt(1,"g"), tt(2,"kk"), tt(1,"kk")]

def publish(subject):
    while(True):
        time.sleep(0.5)
        num = randint(0,2)
        subject.on_next(tts[num])
    subject.on_complete()
    
source = ConnectableObservable(
    rx.create(lambda subject, scheduler: publish(subject)),
    Subject()
    )


def accumulate(tt, acc):
    acc.append(tt.size)
    return acc

def group_process(grp):
    key = grp.key
    acc = []
    grp.subscribe(lambda x: print("{:2}: {}".format(key, sum(accumulate(x, acc)))))

def group_process1(grp):
    grp.pipe(
        op.window(rx.interval(3))
    ).subscribe(window_process(grp.key))

def window_process(key):
    def _window_process(win, acc = []):
        print("********* window start *********")
        win.subscribe(lambda x: acc.append(x.size))
        print("{:3}: {}".format(key, acc))
        acc.clear()
        print("*********  window end  *********")
    return _window_process
    #win.pipe(
    #    op.take_last_with_time(0)
    #).subscribe(lambda x: print("last {}: {}".format(x.mat, sum(accumulate(x, acc)))))

source.pipe(
    op.group_by(lambda i: i.mat)
).subscribe(group_process1)

print("start!")
source.connect()