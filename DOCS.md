# **MuTo Documentation**

# **[Documentation](https://github.com/itsrxmmy/muto/blob/main/docs/README.md)**

# **Understanding the Format**


**\*argument:** all input after previous argument(s) is passed to this argument

Example:

```
muto command param1 *the_rest
```

All input passed after ```param1``` will be passed to ```*rest_of_args``` 

A better example:

```
muto some_file_command	[OPTIONS]	*input
```

```
muto some_file_command -name "foobar.txt" Hello World!
```

```Hello``` and ```World!``` are passed to the ```input``` parameter


**Parameters with an equal sign (```=```) are parameters with default values.**



