# LearningCpp

## Tutorials 1-4
Tutorials 1-4 follow the Derek Banas Youtube series for learning C++, which can be found [here](https://www.youtube.com/playlist?list=PLGLfVvz_LVvQ9S8YSV0iDsuEU8v11yP9M).

## Tutorials 5-7
By this point I was comfortable with the level of problems, and wanted to move to more interesting aspects of C++, so skipped these, as 6 and 7 were simply problem videos.

## Tutorial 8
### Sorting
Within this tutorial, Derek Banas implemented a bubble sort, which then led me to implement a merge sort. It was implementing this myself that has so far taught me the most about the language.

Things that I covered while implementing the merge sort include:
* templates
* the `<size_t>` data type
* use of the `<clock()>` from the `<ctime>` library
* use of further standard functions, such as `<std::copy()>`

### Overloading
I extended the overloading example in the video to include templates, this allows `<int, double, float>` to be passed, by implementing a third overloading method, which allowed the parameters for the two variable version to take parameters of different types.
I am currently working on implementing a check for the data type being passed, so it can handle the exception where the multiply operation cannot be performed on the variable, such as with a vector.